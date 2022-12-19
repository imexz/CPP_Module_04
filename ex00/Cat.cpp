/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:26 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:38:24 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	std::cout << "Cat: Default Constructor called" << std::endl;
	Animal::setType("Cat");
}

Cat::Cat(Cat const &src) {

	std::cout << "Cat: Copy Constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {

	std::cout << "Cat: Destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &src) {

	std::cout << "Cat: Asignment Operator called" << std::endl;
	Animal::_type = src.getType();
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "meeow" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Cat const &i) {

	o << "Cat: type = " << i.getType() << std::endl;
	return (o);
}
