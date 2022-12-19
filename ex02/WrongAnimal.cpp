/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:35 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:41:18 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal: Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "WrongAnimal: Copy Constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src) {

	std::cout << "WrongAnimal: Asignment Operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {

	return (_type);
}

bool	WrongAnimal::setType(std::string type) {

	if (type.empty())
		return (false);
	_type = type;
	return (true);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &src) {

	o << "WrongAnimal: type = " << src.getType() << std::endl;
	return (o);
}