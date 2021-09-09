/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:52:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 04:57:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string  str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "stringPTR: " << stringPTR << '\n';
    std::cout << "stringREF: " << &stringREF << '\n';
    std::cout << "stringPTR: " << *stringPTR << '\n';
    std::cout << "stringREF: " << stringREF << std::endl;
}
