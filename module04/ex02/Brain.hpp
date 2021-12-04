/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:42:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 23:11:30 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain&);
    ~Brain();

    Brain& operator=(const Brain&);

    const std::string& getIdea(const size_t index) const;
    void               setIdea(const std::string& idea, const size_t index);

private:
    std::string ideas[100];
};
