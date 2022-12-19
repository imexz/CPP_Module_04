/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:10:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 04:17:23 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor(void) : _storage() {

	for (int i = 0; i < 100; i++)
		_storage[i] = 0;
}

Floor::Floor(Floor const &src) {

	*this = src;
}

Floor::~Floor(void) {

	std::cout << "Floor: Destructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		if (_storage[i] != 0)
			delete _storage[i];
	}

}

Floor	&Floor::operator=(Floor const &src) {

	for (int i = 0; i < 100; i++) {
		if (_storage[i] != 0)
			delete _storage[i];
		_storage[i] = src._storage[i];
	}
	return (*this);
}

void	Floor::dropItem(AMateria *item) {

	for (int i = 0; i < 100; i++) {
		if (_storage[i] == 0) {
			_storage[i] = item;
			break ;
		}
		if (i == 99) {
			delete item;
		}
	}
}
