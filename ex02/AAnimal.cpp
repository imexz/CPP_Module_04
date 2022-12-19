/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:23 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 13:07:15 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {

	std::cout << "AAnimal: Default Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {

	std::cout << "AAnimal: Copy Constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &src) {

	std::cout << "AAnimal: Asignment Operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const {

	return (_type);
}

bool	AAnimal::setType(std::string type) {

	if (type.empty())
		return (false);
	_type = type;
	return (true);
}

std::ostream	&operator<<(std::ostream &o, AAnimal const &src) {

	o << "AAnimal: type = " << src.getType() << std::endl;
	return (o);
}
