/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:31:12 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/19 18:35:17 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Converter
{
public:
    Converter();
    Converter(const Converter&);
    Converter(const std::string& value);
    Converter& operator=(const Converter&);
    ~Converter();

    std::string to_char() const;
    std::string to_int() const;
    std::string to_float() const;
    std::string to_double() const;

private:
    enum NumType { TypeChar, TypeInt, TypeFloat, TypeDouble };

private:
    std::string value;
    char        c;
    int         num_int;
    double      numd;
    float       numf;
    NumType     type;
    bool        error;

private:
    void parse();
};
