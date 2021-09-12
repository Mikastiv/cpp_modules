/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:09:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:14:19 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice&);
    virtual ~Ice();

    Ice& operator=(const Ice&);

    virtual AMateria* clone() const;
    virtual void      use(ICharacter& target);
};
