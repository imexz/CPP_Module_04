/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:26 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 13:33:11 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	std::cout << "Cat: Default Constructor called" << std::endl;
	AAnimal::setType("Cat");
	_brain = new Brain();
}

Cat::Cat(Cat const &src) {

	std::cout << "Cat: Copy Constructor called" << std::endl;
	_brain = new Brain();
	*this = src;
}

Cat::~Cat(void) {

	std::cout << "Cat: Destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(Cat const &src) {

	std::cout << "Cat: Asignment Operator called" << std::endl;
	AAnimal::_type = src.getType();
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, src.getBrain().getIdea(i));
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "meeow" << std::endl;
}

Brain	&Cat::getBrain(void) const {

	return (*_brain);
}

std::ostream	&operator<<(std::ostream &o, Cat const &i) {

	o << "Cat: type = " << i.getType() << std::endl;
	return (o);
}
