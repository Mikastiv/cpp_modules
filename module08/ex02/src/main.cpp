/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:54:30 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/24 12:44:42 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(6345);
    mstack.push(34);
    mstack.push(2345345);
    mstack.push(234);
    mstack.push(-123);
    mstack.push(-5);
    mstack.push(-5345);
    mstack.push(-23422);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::stack<int> s2;

    s2.push(5);
    s2.push(1);
    s2.push(18);

    s2 = mstack;

    MutantStack<std::string> s3;

    s3.push("Hello");
    s3.push("World");
    s3.push("!");

    MutantStack<std::string>::iterator i = s3.begin();
    MutantStack<std::string>::iterator ie = s3.end();

    for (MutantStack<std::string>::iterator a = i; a < ie; ++a) {
        std::cout << *a << std::endl;
    }
}
