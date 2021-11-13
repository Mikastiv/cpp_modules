/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:43:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:44:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <cstdlib>
#include <iostream>

#define MAX_VAL 20

int main()
{
    Array<int> numbers(MAX_VAL);
    int*       mirror = new int[MAX_VAL];

    for (int i = 0; i < MAX_VAL; i++) {
        std::cout << numbers[i] << "\n";
    }

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        for (size_t i = 0; i < tmp.size(); i++) {
            if (tmp[i] != numbers[i] || &tmp[i] == &numbers[i]) {
                std::cout << "Bad copy\n";
            }
            if (test[i] != numbers[i] || &test[i] == &numbers[i]) {
                std::cout << "Bad copy\n";
            }
        }
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try {
        numbers[-2] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++) {
        std::cout << numbers[i] << "\n";
    }

    delete[] mirror;

    return 0;
}
