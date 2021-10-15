/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:59:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/14 20:28:34 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>

#define DEFAULT_NAME "Robotomy request form"
#define SIGN_GRADE 72
#define EXEC_GRADE 45

RobotomyRequestForm::RobotomyRequestForm() : Form(DEFAULT_NAME, "Default", SIGN_GRADE, EXEC_GRADE)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade())
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form(DEFAULT_NAME, target, SIGN_GRADE, EXEC_GRADE)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    checkExecution(executor);

    time_t now = time(NULL);
    srand((unsigned int)now);

    std::cout << "* Drilling noises *\n";

    if (rand() % 2) {
        std::cout << getTarget() << " has been robotomized successfully\n";
    } else {
        std::cout << getTarget() << "'s robotomy has failed\n";
    }
}
