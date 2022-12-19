/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:00:00 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 20:47:53 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public virtual AMateria {

	public:

		Cure(void);
		Cure(Cure const &src); //explicit
		~Cure(void); // virtual

		Cure			&operator=(Cure const &src);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif