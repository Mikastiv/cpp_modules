/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:25:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/07 13:13:58 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try {
        Bureaucrat c("Exception", 0);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Bureaucrat c("Exception", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    Bureaucrat a("John", 1);
    Bureaucrat b("Joe", 150);

    try {
        std::cout << a << "\n";
        a.decrementGrade();
        std::cout << a << "\n";
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        std::cout << b << "\n";
        b.incrementGrade();
        std::cout << b << "\n";
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Form f("Test", 0, 5);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Form f("Test", 1, 151);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    Form f("Test", 35, 6);
    std::cout << f << "\n";

    Bureaucrat test("Jack", 40);
    Bureaucrat test1("Jim", 35);
    Bureaucrat test2("Joe", 1);

    test.signForm(f);
    test1.signForm(f);
    test2.signForm(f);
}
