/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:18:20 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 21:41:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern&);
    Intern& operator=(const Intern&);
    ~Intern();

    Form* makeForm(const std::string& form, const std::string& target) const;

private:
    Form* makeShrubbery(const std::string& target) const;
    Form* makeRobotomy(const std::string& target) const;
    Form* makePresidential(const std::string& target) const;

private:
    struct {
        std::string form_type;
        Form* (Intern::*form_maker)(const std::string&) const;
    } lookup[3];
};
