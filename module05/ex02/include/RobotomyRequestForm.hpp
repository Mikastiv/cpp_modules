/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:59:00 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/13 22:00:52 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
};
