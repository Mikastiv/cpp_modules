/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:08:30 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/13 22:08:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	~PresidentialPardonForm();
};
