/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:49 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 00:50:55 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

	public:

		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat const &src);
		void		makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, WrongCat const &i);
