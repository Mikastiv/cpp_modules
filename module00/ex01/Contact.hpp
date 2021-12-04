/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 02:33:34 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 04:36:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact
{
public:
    Contact();
    Contact(const std::string& firstname, const std::string& lastname, const std::string& nickname,
        const std::string& phone, const std::string& secret);

    void print_column(size_t index) const;
    void print_full() const;

private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone;
    std::string secret;
};
