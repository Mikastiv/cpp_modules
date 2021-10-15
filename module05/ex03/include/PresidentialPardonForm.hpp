/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:08:30 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 21:36:34 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();

    virtual void execute(const Bureaucrat& executor) const;
};
