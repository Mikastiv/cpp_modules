/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:25:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 14:21:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

    Bureaucrat test("Jack", 40);
    Bureaucrat test1("Jim", 35);
    Bureaucrat test2("Joe", 1);

    ShrubberyCreationForm f("Random", );

    try {
        test.signForm(f);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test1.signForm(f);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test2.signForm(f);
        std::cout << f << "\n";
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
}
