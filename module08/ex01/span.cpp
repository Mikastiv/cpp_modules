/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:38:48 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/16 12:49:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>

Span::Span() : max_size(0)
{
    v.resize(0);
}

Span::Span(const Span& other) : v(other.v), max_size(other.max_size)
{
    *this = other;
}

Span::Span(unsigned int N) : max_size(N)
{
    v.reserve(N);
}

Span& Span::operator=(const Span& rhs)
{
    v = rhs.v;
    max_size = rhs.max_size;

    return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (v.size() >= max_size)
        throw NoSpaceException();
    v.push_back(n);
}

void Span::addNumbers(iterator begin, iterator end)
{
    for (iterator it = begin; it != end; ++it) {
        addNumber(*it);
    }
}

int Span::shortestSpan() const
{
    if (v.size() <= 1)
        throw NoShortSpanException();

    std::vector<int> diffs(v.size());
    std::adjacent_difference(v.begin(), v.end(), diffs.begin());
    int (*iabs)(int) = &std::abs;
    std::transform(diffs.begin(), diffs.end(), diffs.begin(), iabs);
    return *std::min_element(diffs.begin() + 1, diffs.end());
}

int Span::longestSpan() const
{
    if (v.size() <= 1)
        throw NoLongSpanException();

    std::vector<int> diffs(v.size());
    std::adjacent_difference(v.begin(), v.end(), diffs.begin());
    int (*iabs)(int) = &std::abs;
    std::transform(diffs.begin(), diffs.end(), diffs.begin(), iabs);
    return *std::max_element(diffs.begin() + 1, diffs.end());
}

const char* Span::NoSpaceException::what() const throw()
{
    return "Span is full";
}

const char* Span::NoShortSpanException::what() const throw()
{
    return "No short span";
}

const char* Span::NoLongSpanException::what() const throw()
{
    return "No long span";
}
