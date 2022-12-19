/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:46 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 01:48:23 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

	protected:

		std::string	_type;

	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal(void);

		WrongAnimal	&operator=(WrongAnimal const &src);

		std::string	getType(void) const;
		bool		setType(std::string type);
		void		makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &src);