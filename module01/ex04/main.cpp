/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 07:16:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:17:24 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string read_to_string(std::ifstream& file)
{
    std::ostringstream ss;

    ss << file.rdbuf();
    return std::string(ss.str());
}

void replace(std::string& str, const std::string& s1, const std::string& s2)
{
    size_t index = str.find(s1, 0);

    while (index != std::string::npos) {
        str.erase(index, s1.length());
        str.insert(index, s2);
        index = index + s2.length();
        index = str.find(s1, index);
    }
}

int main(int argc, char** argv)
{
    if (argc != 4) {
        std::cerr << "Usage: " << *argv << " <file> <s1> <s2>\n";
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    if (s1.empty() || s2.empty()) {
        std::cerr << "Can't use empty strings\n";
        return 1;
    }

    std::ifstream input(filename.c_str());

    if (!input.is_open()) {
        std::cerr << "Can't open file " << filename << '\n';
        return 1;
    }

    std::string content = read_to_string(input);
    input.close();
    replace(content, s1, s2);

    filename += ".replace";
    std::ofstream output(filename.c_str());

    if (!output.is_open()) {
        std::cerr << "Can't create file " << filename << '\n';
        return 1;
    }

    output << content;
    output.close();
}
