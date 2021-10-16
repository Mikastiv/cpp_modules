/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:22:49 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/16 13:21:25 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "span.hpp"

#define SIZE 1000000

int main()
{
    {
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        try {
            sp.addNumber(10);
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }
    }

    {
        srand(static_cast<unsigned int>(time(NULL)));

        std::vector<int> v;
        for (std::size_t i = 0; i < SIZE; ++i) {
            v.push_back(rand());
        }

        Span s(SIZE);

        s.addNumbers(v.begin(), v.end());
        std::cout << s.shortestSpan() << "\n";
        std::cout << s.longestSpan() << "\n";
    }

    {
        Span s(10);

        try {
            s.shortestSpan();
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }

        try {
            s.longestSpan();
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }

        s.addNumber(5);

        try {
            s.shortestSpan();
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }

        try {
            s.longestSpan();
        } catch (const std::exception& e) {
            std::cout << e.what() << "\n";
        }

        Span s2(s);
        Span s3;

        s3 = s2;

        s3.addNumber(1);
        s3.addNumber(8);

        std::cout << s3.longestSpan() << "\n";
    }
}
