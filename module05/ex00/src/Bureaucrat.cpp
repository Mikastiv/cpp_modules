/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:42:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 23:11:46 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define GRADE_LOW 1
#define GRADE_HIGH 150

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat::Bureaucrat(const std::string& name_, unsigned int grade_)
    : name(name_), grade(grade_)
{
    if (grade_ > GRADE_HIGH) {
        throw GradeTooHighException();
    } else if (grade_ < GRADE_LOW) {
        throw GradeTooLowException();
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    const_cast<std::string&>(name) = rhs.name;
    grade = rhs.grade;

    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const
{
    return name;
}

unsigned int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    --grade;
    if (grade < GRADE_LOW)
        throw GradeTooLowException();
}

void Bureaucrat::decrementGrade()
{
    ++grade;
    if (grade > GRADE_HIGH)
        throw GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();

    return os;
}
