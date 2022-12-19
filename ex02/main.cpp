/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:50:37 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/01 13:37:28 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	AAnimal	*animals[6];

	for (int i = 0; i < 6; i++) {
		if (i < 3) {
			animals[i] = new Cat();
		}
		else if (i > 2)
			animals[i] = new Dog();
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 0; i < 6; i++) {
			delete animals[i];
	}

	std::cout << std::endl << "DeepCopy Tests: Cat" << std::endl;
	Cat	catA;
	catA.getBrain().setIdea(0, "destroy everything");
	Cat	catB(catA);

	std::cout << "Cat A: " << catA.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat B: " << catB.getBrain().getIdea(0) << std::endl;

	catA.getBrain().setIdea(0, "get some food instead");

	std::cout << "Changed idea of CatA" << std::endl;
	std::cout << "Cat A: " << catA.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat B: " << catB.getBrain().getIdea(0) << std::endl;


	std::cout << std::endl << "DeepCopy Tests: Dog" << std::endl;
	Dog	DogA;
	DogA.getBrain().setIdea(0, "go crazy, someone yelled my name");
	Dog	DogB(DogA);

	std::cout << "DogA: " << DogA.getBrain().getIdea(0) << std::endl;
	std::cout << "DogB: " << DogB.getBrain().getIdea(0) << std::endl;

	DogA.getBrain().setIdea(0, "go crazy anyway");

	std::cout << "Changed idea of DogA" << std::endl;
	std::cout << "DogA: " << DogA.getBrain().getIdea(0) << std::endl;
	std::cout << "DogB: " << DogB.getBrain().getIdea(0) << std::endl;

	//AAnimal bignono;

	return 0;
}