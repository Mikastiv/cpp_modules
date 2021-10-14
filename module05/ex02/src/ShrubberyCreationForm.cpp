/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:44:38 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 14:27:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define DEFAULT_NAME "Shrubbery"
#define SIGN_GRADE 145
#define EXEC_GRADE 137

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form(DEFAULT_NAME, "Default", SIGN_GRADE, EXEC_GRADE)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form(DEFAULT_NAME, target, SIGN_GRADE, EXEC_GRADE)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
