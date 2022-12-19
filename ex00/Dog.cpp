/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:29 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:39:23 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	std::cout << "Dog: Default Constructor called" << std::endl;
	Animal::setType("Dog");
}

Dog::Dog(Dog const &src) {

	std::cout << "Dog: Copy Constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {

	std::cout << "Dog: Destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &src) {

	std::cout << "Dog: Asignment Operator called" << std::endl;
	Animal::_type = src.getType();
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "woof woof" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Dog const &i) {

	o << "Dog: type = " << i.getType() << std::endl;
	return (o);
}