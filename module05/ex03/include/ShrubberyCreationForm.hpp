/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:23:06 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 00:43:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    virtual ~ShrubberyCreationForm();

    virtual void execute(const Bureaucrat& executor) const;
};
