/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:44:38 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 20:28:41 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

#define DEFAULT_NAME "Shrubbery creation form"
#define SIGN_GRADE 145
#define EXEC_GRADE 137
#define N_TREES 5

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form(DEFAULT_NAME, "Default", SIGN_GRADE, EXEC_GRADE)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form(DEFAULT_NAME, target, SIGN_GRADE, EXEC_GRADE)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    checkExecution(executor);

    std::ofstream file((getTarget() + "_shrubbery").c_str());

    if (file.is_open()) {
        for (int i = 0; i < 5; ++i) {
            file << "                                                         .\n"
                 << "                                              .         ;\n"
                 << "                 .              .              ;%     ;;\n"
                 << "                   ,           ,                :;%  %;\n"
                 << "                    :         ;                   :;%;'     .,\n"
                 << "           ,.        %;     %;            ;        %;'    ,;\n"
                 << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
                 << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
                 << "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
                 << "                `%;.     ;%;     %;'         `;%%;.%;'\n"
                 << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
                 << "                    `:%;.  :;bd%;          %;@%;'\n"
                 << "                      `@%:.  :;%.         ;@@%;'\n"
                 << "                        `@%.  `;@%.      ;@@%;\n"
                 << "                          `@%%. `@%%    ;@@%;\n"
                 << "                            ;@%. :@%%  %@@%;\n"
                 << "                              %@bd%%%bd%%:;\n"
                 << "                                #@%%%%%:;;\n"
                 << "                                %@@%%%::;\n"
                 << "                                %@@@%(o);  . '\n"
                 << "                                %@@@o%;:(.,'\n"
                 << "                            `.. %@@@o%::;\n"
                 << "                               `)@@@o%::;\n"
                 << "                                %@@(o)::;\n"
                 << "                               .%@@@@%::;\n"
                 << "                               ;%@@@@%::;.\n"
                 << "                              ;%@@@@%%:;;;.\n"
                 << "                          ...;%@@@@@%%:;;;;,..";

            if (i < N_TREES)
                file << "\n\n";
            else
                file << "\n";
        }
    }
}
