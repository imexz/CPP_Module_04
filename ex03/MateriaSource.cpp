/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:01:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 18:58:41 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias(), _idx(0) {

	for (size_t i = 0; i < 4; i++) {
		_materias[i] = NULL;
	}
	std::cout << "MateriaSource: Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) : _materias(), _idx(0) {

	std::cout << "MateriaSource: Copy Constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void) {

	for (size_t i = 0; i < sizeof(_materias) / sizeof(_materias[0]); i++) {
		delete _materias[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src) {

	for (size_t i = 0; i < 4; i++) {
		if (_materias[i] != 0)
			delete _materias[i];
		_materias[i] = src._materias[i]->clone();
	}
	_idx = src._idx;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia) {

	if (_idx > 3)
		return ;
	_materias[_idx] = materia;
	_idx++;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {

	for(size_t i = 0; i < sizeof(_materias) / sizeof(_materias[0]); i++) {
		if (_materias[i] != 0 && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (0);
}
