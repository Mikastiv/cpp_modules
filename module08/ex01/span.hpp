/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:13 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/16 02:33:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span
{
public:
    typedef std::vector<int>::iterator iterator;

public:
    Span();
    Span(const Span&);
    Span(unsigned int N);
    Span& operator=(const Span&);
    ~Span();

    void addNumber(int n);
    void addNumbers(iterator begin, iterator end);
    int  shortestSpan() const;
    int  longestSpan() const;

    class NoSpaceException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class NoShortSpanException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class NoLongSpanException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

private:
    std::vector<int> v;
    unsigned int     max_size;
};
