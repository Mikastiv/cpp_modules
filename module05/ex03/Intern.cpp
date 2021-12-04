/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:19:11 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 01:03:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    lookup[0].form_type = "shrubbery creation";
    lookup[0].form_maker = &Intern::makeShrubbery;
    lookup[1].form_type = "robotomy request";
    lookup[1].form_maker = &Intern::makeRobotomy;
    lookup[2].form_type = "presidential pardon";
    lookup[2].form_maker = &Intern::makePresidential;
}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& rhs)
{
    lookup[0].form_type = rhs.lookup[0].form_type;
    lookup[0].form_maker = rhs.lookup[0].form_maker;
    lookup[1].form_type = rhs.lookup[1].form_type;
    lookup[1].form_maker = rhs.lookup[1].form_maker;
    lookup[2].form_type = rhs.lookup[2].form_type;
    lookup[2].form_maker = rhs.lookup[2].form_maker;

    return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm(const std::string& form, const std::string& target) const
{
    for (int i = 0; i < 3; ++i) {
        if (lookup[i].form_type == form) {
            std::cout << "Intern creates " << form << "\n";
            return (this->*lookup[i].form_maker)(target);
        }
    }

    std::cout << "Form " << form << " is unknown\n";
    return NULL;
}

Form* Intern::makeShrubbery(const std::string& target) const
{
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy(const std::string& target) const
{
    return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(const std::string& target) const
{
    return new PresidentialPardonForm(target);
}
