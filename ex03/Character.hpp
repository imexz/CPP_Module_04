/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:38:11 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 02:02:00 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "Floor.hpp"

class Character : public ICharacter {

	private:

		std::string	_name;
		AMateria	*_inventory[4];
		Floor		_floor;

	public:

		Character(void);
		Character(std::string name);
		Character(Character const &src);
		~Character(void);

		Character			&operator=(Character const &src);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
