/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 04:50:18 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:32:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ICharacter;

class AMateria
{
public:
    AMateria();
    AMateria(const AMateria&);
    AMateria(const std::string& type);
    AMateria& operator=(const AMateria& rhs);
    virtual ~AMateria();

    const std::string& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void      use(ICharacter& target);

protected:
    std::string type;
};
