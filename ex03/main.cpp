/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:39:34 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/02 04:41:21 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int main() {

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "own testing" << std::endl;

	AMateria	*tmp1 = new Ice();
	std::cout << tmp1->getType() << std::endl;
	AMateria	*tmp2 = tmp1->clone();
	AMateria	*tmp3 = new Cure();
	AMateria	*tmp4 = tmp3->clone();
	Character	c("Tim");
	Character	d(c);

	tmp1->use(d);
	std::cout << std::endl;
	//d.use(0, c);
	std::cout << std::endl;
	c.equip(tmp1);
	c.use(0, d);
	std::cout << std::endl;
	std::cout << "Unexisting Materias test start: should not print anything" << std::endl;
	c.use(1, d); //unexisting Materias
	std::cout << "Unexisting Materias test end" << std::endl;
	std::cout << std::endl;
	c.equip(tmp2);
	c.use(1, d);
	c.equip(tmp3);
	c.use(2, d);
	c.equip(tmp4);
	c.use(3, d);
	std::cout << std::endl;
	std::cout << "Full inventory and invalid idx test start: No Parameterized Constructor and Default Constructor message:" << std::endl;
	c.equip(tmp3); //inventory is already full
	c.use(4, d); //invalid idx
	std::cout << "Full inventory and invalid idx test end" <<std::endl;
	std::cout << std::endl;

	c.unequip(0);
	c.unequip(1);
	c.unequip(2);
	c.unequip(3);
	c.use(0, d);
	c.use(1, d);

	Character	*char1 = new Character("Udo");
	Character	*char2 = new Character("Uschi");

	AMateria	*tmp5 = new Ice();
	AMateria	*tmp6 = new Cure();

	char2->equip(tmp5);
	char2->use(0, *char1);

	std::cout << "Name of char1: " <<char1->getName() << std::endl;
	std::cout << "Name of char2: " << char2->getName() << std::endl;
	*char1 = *char2;

	char1->equip(tmp6);
	char1->use(1, *char2);
	char1->use(0, *char2);

	std::cout << "Name of char1: " <<char1->getName() << std::endl;
	std::cout << "Name of char2: " << char2->getName() << std::endl;

	delete char1;
	delete char2;

	return 0;
}