/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:25:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 01:05:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    srand((unsigned int)time(NULL));

    {
        Intern someRandomIntern;
        Form*  rrf;

        {
            Bureaucrat b("Jim", 72);
            Bureaucrat b1("Jake", 45);
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;

        {
            Bureaucrat b("Jim", 145);
            Bureaucrat b1("Jake", 137);
            rrf = someRandomIntern.makeForm("shrubbery creation", "Homer");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;

        {
            Bureaucrat b("Jim", 6);
            Bureaucrat b1("Jake", 5);
            rrf = someRandomIntern.makeForm("presidential pardon", "Mickey");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;

        {
            Bureaucrat b("Jim", 6);
            Bureaucrat b1("Jake", 5);
            rrf = someRandomIntern.makeForm("pikachu", "Ash");
        }
    }
}
