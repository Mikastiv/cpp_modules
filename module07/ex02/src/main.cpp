/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:57:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 22:15:06 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

template <typename T>
void print_array(Array<T>& array)
{
    for (std::size_t i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    {
        Array<int> arr;
        Array<int> arr2(10);

        try {
            arr[0];
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }
        try {
            arr2[10];
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }
    }

    {
        Array<float> arr(40);
        Array<float> arr2(arr);
        Array<float> arr3 = arr;

        print_array(arr);
        print_array(arr2);
        print_array(arr3);
        std::cout << std::endl;
        arr[5] = 7;
        arr2[5] = 8;
        arr3[22] = 2;
        print_array(arr);
        print_array(arr2);
        print_array(arr3);
        std::cout << std::endl;
        arr = arr2;
        arr2 = arr3;
        print_array(arr);
        print_array(arr2);
        print_array(arr3);
    }

    {
        Array<std::string> words(3);

        try {
            words[0] = "Hello";
            words[1] = "World";
            words[2] = "!";
            words[3] = "Break";
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }
        print_array(words);
    }
}
