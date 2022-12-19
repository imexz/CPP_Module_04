/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:39:42 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 00:50:52 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	protected:

		const std::string	_type;

	public:

		AMateria(void);
		AMateria(AMateria const &src); // explicit
		AMateria(std::string const &type); // explicit
		virtual ~AMateria(void);

		AMateria			&operator=(AMateria const &src);

		std::string const	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
