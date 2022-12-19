/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:52:24 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 01:14:06 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Brain: Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {

	std::cout << "Brain: Copy Constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void) {

	std::cout << "Brain: Destructor called" << std::endl;
}

std::string	Brain::getIdea(unsigned int idx) const {

	if (idx >= 0 && idx < 100)
		return (_ideas[idx]);
	return (_ideas[0]);
}

bool	Brain::setIdea(unsigned int idx, std::string idea) {

	if (idx >= 0 && idx < 100) {
		_ideas[idx] = idea;
		return (true);
	}
	return (false);
}

Brain	&Brain::operator=(Brain const &src) {

	std::cout << "Brain: Asignment Operator called" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = src._ideas[i];
	}
	return (*this);
}
