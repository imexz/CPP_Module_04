/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:00:02 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 20:42:54 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public virtual AMateria {

	public:

		Ice(void);
		Ice(Ice const &src); //explicit
		~Ice(void); //virtual

		Ice			&operator=(Ice const &src);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
