/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:59:57 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 00:05:24 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {

	std::cout << "Ice: Default Constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src.getType()) {

	std::cout << "Ice: Copy Constructor called" << std::endl;
}

Ice::~Ice(void) {

	std::cout << "Ice: Destructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &src) {

	std::cout << "Ice: Assignment Operator called" << std::endl;
	// attribute _type is const, no assignment possible
	(void) src;
	return (*this);
}

AMateria	*Ice::clone(void) const {

	return (new Ice());
}

void	Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

