/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:31 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:42:46 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	std::cout << "WrongCat: Default Constructor called" << std::endl;
	WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src) {

	std::cout << "WrongCat: Copy Constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src) {

	std::cout << "WrongCat: Asignment Operator called" << std::endl;
	WrongAnimal::_type = src.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "miau woof woof" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, WrongCat const &i) {

	o << "WrongCat: type = " << i.getType() << std::endl;
	return (o);
}
