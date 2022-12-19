/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:53:22 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:44:49 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {

	protected:

		std::string	_type;

	public:

		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &src);

		std::string			getType(void) const;
		bool				setType(std::string type);
		virtual void		makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Animal const &src);
