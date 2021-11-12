/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:59:00 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 00:43:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    virtual ~RobotomyRequestForm();

    virtual void execute(const Bureaucrat& executor) const;
};
