/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:23 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:36:40 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "Animal: Default Constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {

	std::cout << "Animal: Copy Constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {

	std::cout << "Animal: Destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &src) {

	std::cout << "Animal: Asignment Operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

std::string	Animal::getType(void) const {

	return (_type);
}

bool	Animal::setType(std::string type) {

	if (type.empty())
		return (false);
	_type = type;
	return (true);
}

void	Animal::makeSound(void) const {

	std::cout << "Animal makeSound called" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Animal const &src) {

	o << "Animal: type = " << src.getType() << std::endl;
	return (o);
}