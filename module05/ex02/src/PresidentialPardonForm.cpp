/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:08:59 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/13 22:24:33 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default", "Default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
