/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:44 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:34:13 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	private:

	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog		&operator=(Dog const &src);
		void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);
