/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:25:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 20:52:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

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

    Bureaucrat test("Jack", 150);
    Bureaucrat test1("Jim", 35);
    Bureaucrat test2("Joe", 1);

    ShrubberyCreationForm  f("home");
    RobotomyRequestForm    f1("dog");
    PresidentialPardonForm f2("Amazon");

    test.signForm(f);
    test1.signForm(f);
    test2.signForm(f);

    srand((unsigned int)time(NULL));

    test.executeForm(f);
    test.executeForm(f1);
    test.executeForm(f2);

    test1.executeForm(f);
    test1.executeForm(f1);
    test1.executeForm(f2);

    test2.executeForm(f);
    test2.executeForm(f1);
    test2.executeForm(f2);
}
