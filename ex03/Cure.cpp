/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:59:55 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 00:05:58 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

	std::cout << "Cure: Default Constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src.getType()) {

	std::cout << "Cure: Copy Constructor called" << std::endl;
}

Cure::~Cure(void) {

	std::cout << "Cure: Destructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &src) {

	std::cout << "Cure: Assignment Operator called" << std::endl;
	// attribute _type is const -> no assignment possible
	(void) src;
	return (*this);
}

AMateria	*Cure::clone(void) const {

	return (new Cure());
}

void	Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

