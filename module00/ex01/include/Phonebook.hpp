/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:03:21 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 03:07:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Contact.hpp"

const size_t PB_SIZE = 8;

class Phonebook
{
public:
    void add();
    void search() const;

private:
    void add_contact(Contact contact);

private:
    Contact contacts[PB_SIZE];
    size_t  size;
    size_t  oldest;
};
