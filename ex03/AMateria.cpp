/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:39:44 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 23:50:40 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {

	std::cout << "AMateria: Default Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) : _type(src.getType()) {

	std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {

	std::cout << "AMateria Parameterized Constructor called" << std::endl;
}

AMateria::~AMateria(void) {

	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &src) {

	std::cout << "AMateria Assignment Operator called" << std::endl;
	// only attribute is _type:
	// _type is const -> no assignment possible (only when initialized)
	(void) src;
	return (*this);
}

std::string const	&AMateria::getType(void) const {

	return (_type);
}

void	AMateria::use(ICharacter &target) {

	(void) target;
}
