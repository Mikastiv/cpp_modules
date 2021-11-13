/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:28:45 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/13 00:21:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(3);

    test(v, 2);
    test(v, 9);

    std::deque<int> q;

    q.push_back(3);
    q.push_back(13);
    q.push_back(23);
    q.push_back(33);
    q.push_back(43);
    q.push_back(53);

    test(q, 2);
    test(q, 9);
    test(q, 3);
    test(q, 33);

    std::list<int> l;

    l.push_back(834);
    l.push_back(-1);
    l.push_back(8);

    test(l, -1);
    test(l, 33);
}
