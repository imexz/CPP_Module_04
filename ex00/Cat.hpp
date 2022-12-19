/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:41 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:34:01 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {

	private:

	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat		&operator=(Cat const &src);
		void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);
