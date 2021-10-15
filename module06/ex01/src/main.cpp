/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 03:03:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
#include <iomanip>

typedef struct {
    const char* msg;
    int         error;
} Data;

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data      data = { "Message", 0 };
    uintptr_t raw = serialize(&data);
    Data*     ptr = deserialize(raw);

    std::cout << "Raw: 0x" << std::hex << raw << "\n"
              << "Ptr: " << ptr << "\n";
}
