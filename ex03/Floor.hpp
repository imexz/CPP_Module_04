/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:10:38 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 22:54:51 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

class Floor {

	private:

		AMateria	*_storage[100];

	public:

		Floor(void);
		Floor(Floor const &src);
		~Floor(void);

		Floor	&operator=(Floor const &src);

		void	dropItem(AMateria	*item);

};


#endif
