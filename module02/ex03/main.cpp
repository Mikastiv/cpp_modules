/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:49:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 01:44:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point a(0.0f, 0.0f);
    Point b(2.0f, 0.0f);
    Point c(0.0f, 2.0f);
    Point d(0.95f, 0.95f);
    Point e(0.0f, 0.95f);

    std::cout << std::boolalpha << bsp(a, b, c, d) << std::endl;
    std::cout << std::boolalpha << bsp(a, b, c, e) << std::endl;

    std::cout << e.getX() << " " << e.getY() << '\n';

    return 0;
}
