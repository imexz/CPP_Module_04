/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:29 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 01:34:53 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	std::cout << "Dog: Default Constructor called" << std::endl;
	Animal::setType("Dog");
	_brain = new Brain();
}

Dog::Dog(Dog const &src) {

	std::cout << "Dog: Copy Constructor called" << std::endl;
	_brain = new Brain();
	*this = src;
}

Dog::~Dog(void) {

	std::cout << "Dog: Destructor called" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(Dog const &src) {

	std::cout << "Dog: Asignment Operator called" << std::endl;
	Animal::_type = src.getType();
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, src.getBrain().getIdea(i));
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "woof woof" << std::endl;
}

Brain	&Dog::getBrain(void) const {

	return (*_brain);
}

std::ostream	&operator<<(std::ostream &o, Dog const &i) {

	o << "Dog: type = " << i.getType() << std::endl;
	return (o);
}