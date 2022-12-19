/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:53:22 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 13:33:02 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

	protected:

		std::string	_type;

	public:

		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal	&operator=(AAnimal const &src);

		std::string			getType(void) const;
		bool				setType(std::string type);
		virtual void		makeSound(void) const = 0;
};

std::ostream	&operator<<(std::ostream &o, AAnimal const &src);

#endif
