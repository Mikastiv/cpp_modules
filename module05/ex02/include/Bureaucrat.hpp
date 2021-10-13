/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:39:07 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/07 13:11:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define GRADE_LOW 150
#define GRADE_HIGH 1

class Form;

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat&);
    Bureaucrat(const std::string& name, unsigned int grade);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat();

    const std::string& getName() const;
    unsigned int       getGrade() const;
    void               incrementGrade();
    void               decrementGrade();
    void               signForm(Form& form) const;

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
    const std::string name;
    unsigned int      grade;

private:
    void checkGrade() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
