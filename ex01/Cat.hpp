/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:41 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 01:29:40 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:

		Brain	*_brain;

	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat		&operator=(Cat const &src);
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);
