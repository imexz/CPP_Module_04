/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:37 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 20:48:50 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete(meta);
	delete(i);
	delete(j);

	const WrongAnimal* meta1 = new WrongAnimal();
	const Animal* jj = new Dog();
	const WrongAnimal* ii = new WrongCat();
	std::cout << jj->getType() << " " << std::endl;
	std::cout << ii->getType() << " " << std::endl;
	jj->makeSound();
	ii->makeSound();
	meta1->makeSound();

	delete(meta1);
	delete(ii);
	delete(jj);
	return 0;
}