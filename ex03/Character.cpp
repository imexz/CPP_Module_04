/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:38:06 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 04:37:22 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("unknown"), _inventory() {

	std::cout << "Character: Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

Character::Character(std::string name) : _name(name), _inventory() {

	std::cout << "Character: Parameterized Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

Character::Character(Character const &src) {

	std::cout << "Character: Copy Constructor called" << std::endl;
	// for (size_t i = 0; i < sizeof(src._inventory) / sizeof(src._inventory[0]); i++) {
	// 	this->_inventory[i] = src._inventory[i]->clone();
	// }
	this->_name = src.getName();
	for (size_t i = 0; i < 4; i++) {
		if (src._inventory[i] != 0)
			this->_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
}

Character::~Character(void) {

	std::cout << "Character: Destructor called " << _name << std::endl;

	// for (size_t i = 0; i < sizeof(_inventory) / sizeof(_inventory[0]); i++) {
	// 	delete _inventory[i];
	// }
	for (size_t i = 0; i < 4; i++) {
		if (_inventory[i] != 0)
			delete _inventory[i];
	}
	std::cout << "Character: leaving Destructor" <<std::endl;
}

Character	&Character::operator=(Character const &src) {

	this->_name = src.getName();
	for (size_t i = 0; i < sizeof(src._inventory) / sizeof(src._inventory[0]); i++) {
		if (src._inventory[i] != 0) {
			delete _inventory[i];
			_inventory[i] = src._inventory[i]->clone();
		}
		else
			_inventory[i] = 0;
	}
	return (*this);
}

std::string const	&Character::getName(void) const {

	return (_name);
}

void	Character::equip(AMateria *m) {

	for (size_t i = 0; i < sizeof(_inventory) / sizeof(_inventory[0]); i++) {
		if (_inventory[i] == 0) {
			_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {

	if (idx < 0 || idx > 3 || _inventory[idx] == 0)
		return ;
	_floor.dropItem(_inventory[idx]->clone());
	delete _inventory[idx];
	_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target) {

	if (idx < 0 || idx > 3 || _inventory[idx] == 0)
		return ;
	_inventory[idx]->use(target);
}
