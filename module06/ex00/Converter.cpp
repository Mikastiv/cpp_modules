/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:36:08 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/19 18:36:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

Converter::Converter()
    : value("0"), c(0), num_int(0), numd(0.0), numf(0.0f), type(TypeChar), error(true)
{
}

Converter::Converter(const Converter& other)
{
    *this = other;
}

Converter::Converter(const std::string& value_)
    : value(value_), c(0), num_int(0), numd(0.0), numf(0.0f), type(TypeChar), error(true)
{
    parse();
}

Converter& Converter::operator=(const Converter& rhs)
{
    value = rhs.value;
    c = rhs.c;
    num_int = rhs.num_int;
    numd = rhs.numd;
    numf = rhs.numf;
    type = rhs.type;
    error = rhs.error;

    return *this;
}

Converter::~Converter() {}

bool is_pseudo_litteral(const std::string& str)
{
    if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" ||
        str == "-inff" || str == "inf" | str == "inff") {
        return true;
    }
    return false;
}

std::string Converter::to_char() const
{
    if (error) {
        return "char: impossible";
    }
    if (!std::isprint(static_cast<int>(c))) {
        return "char: Non displayable";
    }
    if (type == TypeFloat || type == TypeDouble) {
        if (numd != numd || numd == std::numeric_limits<double>::infinity() ||
            numd == -std::numeric_limits<double>::infinity()) {
            return "char: impossible";
        }
    }

    std::stringstream ss;

    ss << "char: '" << c << "'";
    return ss.str();
}

std::string Converter::to_int() const
{
    if (error) {
        return "int: impossible";
    }
    if (type == TypeFloat || type == TypeDouble) {
        if (numd != numd || numd == std::numeric_limits<double>::infinity() ||
            numd == -std::numeric_limits<double>::infinity()) {
            return "int: impossible";
        }
    }

    std::stringstream ss;

    ss << "int: " << num_int;
    return ss.str();
}

std::string Converter::to_float() const
{
    if (error) {
        return "float: impossible";
    }

    std::stringstream ss;

    if (value == "+inf") {
        ss << "float: +";
    } else {
        ss << "float: ";
    }
    ss << std::fixed << std::setprecision(1) << numf << "f";

    return ss.str();
}

std::string Converter::to_double() const
{
    if (error) {
        return "double: impossible";
    }

    std::stringstream ss;

    if (value == "+inf") {
        ss << "double: +";
    } else {
        ss << "double: ";
    }
    ss << std::fixed << std::setprecision(1) << numd;

    return ss.str();
}

void Converter::parse()
{
    char* end;

    error = false;
    if (value.length() == 1 && !std::isdigit(value[0])) {
        type = TypeChar;
        c = value[0];
    } else {
        if (value.find('.') != std::string::npos || is_pseudo_litteral(value)) {
            if (value == "nanf" || value == "-inff" || value == "+inff" || value == "inff") {
                value.erase(value.end() - 1);
            }
            if (value.find('.') != std::string::npos && value[value.length() - 1] == 'f') {
                type = TypeFloat;
                value.erase(value.end() - 1);
                numf = std::strtof(value.c_str(), &end);
            } else {
                type = TypeDouble;
                numd = std::strtod(value.c_str(), &end);
            }

            if (*end != '\0') {
                error = true;
            }
        } else {
            type = TypeInt;
            num_int = static_cast<int>(std::strtol(value.c_str(), &end, 10));

            if (*end != '\0') {
                error = true;
            }
        }
    }

    if (!error) {
        switch (type) {
            case TypeChar: {
                num_int = static_cast<int>(c);
                numd = static_cast<double>(c);
                numf = static_cast<float>(c);
                break;
            }

            case TypeInt: {
                c = static_cast<char>(num_int);
                numd = static_cast<double>(num_int);
                numf = static_cast<float>(num_int);
                break;
            }

            case TypeFloat: {
                c = static_cast<char>(numf);
                num_int = static_cast<int>(numf);
                numd = static_cast<double>(numf);
                break;
            }

            case TypeDouble: {
                c = static_cast<char>(numd);
                num_int = static_cast<int>(numd);
                numf = static_cast<float>(numd);
                break;
            }
        }
    }
}
