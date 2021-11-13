/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:34:06 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:38:18 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstring>
#include <sstream>
#include <stdexcept>

template <typename T>
class Array
{
public:
    Array() : elems(new T[0]()), size_(0U){};
    Array(unsigned int n) : elems(new T[n]), size_(n){};
    Array(const Array& other) : elems(NULL) { *this = other; };
    Array& operator=(const Array& rhs)
    {
        delete[] elems;
        size_ = rhs.size();
        elems = new T[size()]();
        std::memcpy(elems, rhs.elems, size() * sizeof(T));

        return *this;
    };
    ~Array() { delete[] elems; };

    T& operator[](std::size_t idx)
    {
        if (idx >= size()) {
            std::stringstream ss;

            ss << "Index " << idx << " is out of bounds";
            throw std::out_of_range(ss.str());
        }

        return elems[idx];
    }

    unsigned int size() const { return size_; }

private:
    T*           elems;
    unsigned int size_;
};
