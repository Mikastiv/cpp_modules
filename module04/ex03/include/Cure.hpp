/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:09:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:18:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure&);
    virtual ~Cure();

    Cure& operator=(const Cure&);

    virtual AMateria* clone() const;
    virtual void      use(ICharacter& target);
};
