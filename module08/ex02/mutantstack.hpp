/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:54:52 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/16 13:07:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

public:
    MutantStack(){};
    MutantStack(const MutantStack& other) { *this = other; };
    MutantStack& operator=(const MutantStack& rhs)
    {
        std::stack<T>::operator=(rhs);
        return *this;
    };
    ~MutantStack(){};

    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};
