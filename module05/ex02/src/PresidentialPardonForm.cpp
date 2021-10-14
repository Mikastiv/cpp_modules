/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:08:59 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 14:53:04 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#define DEFAULT_NAME "Presidential"
#define SIGN_GRADE 25
#define EXEC_GRADE 5

PresidentialPardonForm::PresidentialPardonForm()
    : Form(DEFAULT_NAME, "Default", SIGN_GRADE, EXEC_GRADE)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form(DEFAULT_NAME, target, SIGN_GRADE, EXEC_GRADE)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
