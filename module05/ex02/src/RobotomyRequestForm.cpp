/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:59:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/13 22:25:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default", "Default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
