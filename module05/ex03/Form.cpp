/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:56:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 20:43:36 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), target("Default"), sign_grade(GRADE_LOW), exec_grade(GRADE_LOW) {}

Form::Form(const Form& other)
    : name(other.name),
      target(other.target),
      sign_grade(other.sign_grade),
      exec_grade(other.exec_grade),
      is_signed(other.is_signed)
{
    checkGrades();
}

Form::Form(const std::string& name_, const std::string& target_, unsigned int sign_grade_,
    unsigned int exec_grade_)
    : name(name_), target(target_), sign_grade(sign_grade_), exec_grade(exec_grade_)
{
    checkGrades();
}

Form& Form::operator=(const Form& rhs)
{
    is_signed = rhs.is_signed;
    checkGrades();

    return *this;
}

Form::~Form() {}

const std::string& Form::getName() const
{
    return name;
}

const std::string& Form::getTarget() const
{
    return target;
}

unsigned int Form::getSignGrade() const
{
    return sign_grade;
}

unsigned int Form::getExecGrade() const
{
    return exec_grade;
}

bool Form::isSigned() const
{
    return is_signed;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > sign_grade)
        throw Form::GradeTooLowException();
    is_signed = true;
}

void Form::checkExecution(const Bureaucrat& executor) const
{
    if (!isSigned())
        throw Form::NotSignedException();
    if (getExecGrade() < executor.getGrade())
        throw Form::GradeTooLowException();
}

void Form::checkGrades() const
{
    if (exec_grade < GRADE_HIGH) {
        throw GradeTooHighException();
    } else if (exec_grade > GRADE_LOW) {
        throw GradeTooLowException();
    }

    if (sign_grade < GRADE_HIGH) {
        throw GradeTooHighException();
    } else if (sign_grade > GRADE_LOW) {
        throw GradeTooLowException();
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

const char* Form::NotSignedException::what() const throw()
{
    return "form not signed";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << f.getName() << ", signing grade " << f.getSignGrade() << ", executing grade "
       << f.getExecGrade() << (f.isSigned() ? ", is signed" : ", is not signed");

    return os;
}
