/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:44 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 01:29:32 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:

		Brain	*_brain;

	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog		&operator=(Dog const &src);
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);
