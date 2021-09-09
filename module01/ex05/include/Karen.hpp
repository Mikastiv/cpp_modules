/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:36:15 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 05:34:13 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Karen
{
public:
    Karen();

    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();

private:
    std::string levels[4];
    void (Karen::*actions[4])();
};
