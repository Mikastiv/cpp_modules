/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:42:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/07 13:13:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(GRADE_LOW) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
    checkGrade();
}

Bureaucrat::Bureaucrat(const std::string& name_, unsigned int grade_) : name(name_), grade(grade_)
{
    checkGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    grade = rhs.grade;
    checkGrade();

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
    checkGrade();
}

void Bureaucrat::decrementGrade()
{
    ++grade;
    checkGrade();
}

void Bureaucrat::signForm(Form& form) const
{
    try {
        form.beSigned(*this);
        std::cout << getName() << " signs " << form.getName() << "\n";
    } catch (std::exception& e) {
        std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what()
                  << "\n";
    }
}

void Bureaucrat::checkGrade() const
{
    if (grade < GRADE_HIGH) {
        throw GradeTooHighException();
    } else if (grade > GRADE_LOW) {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();

    return os;
}
