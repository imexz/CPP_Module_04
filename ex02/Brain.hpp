/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:52:23 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 00:59:05 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain {

	private:

		std::string	_ideas[100];

	public:

		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain		&operator=(Brain const &src);
		std::string	getIdea(unsigned int idx) const;
		bool		setIdea(unsigned int idx, std::string idea);
};
