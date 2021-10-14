/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:55:38 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/04 12:31:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form(const Form&);
    Form(const std::string& name, unsigned int sign_grade, unsigned int exec_grade);
    Form& operator=(const Form&);
    ~Form();

    const std::string& getName() const;
    unsigned int       getSignGrade() const;
    unsigned int       getExecGrade() const;
    bool               isSigned() const;
    void               beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

private:
    const std::string  name;
    const unsigned int sign_grade;
    const unsigned int exec_grade;
    bool               is_signed;

private:
    void checkGrades() const;
};

std::ostream& operator<<(std::ostream& os, const Form& b);
