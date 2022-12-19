/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:03:03 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 16:08:46 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {

	public:

		virtual 			~IMateriaSource() {};
		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};

#endif
