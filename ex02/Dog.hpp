/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:44 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 13:32:55 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

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

#endif
