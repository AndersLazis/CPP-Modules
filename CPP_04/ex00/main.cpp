/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:34 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:22:43 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/Dog.hpp"
#include "includes/Colors.hpp"

int main ()
{		
	// ////////////////////////////////////////////////////////
	// //					TESTS FROM SUBJECT			      //
	// ////////////////////////////////////////////////////////

	
	std::cout << GREEN << "============ TESTS FROM SUBJECT ============\n\n" << RESET;
	std::cout << "============ Animal creation ============\n";
	const Animal* meta = new Animal();
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	
	std::cout << "============ Action tests ============\n";
	meta->makeSound(); 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();

		
	std::cout << "============ Destructors called ============\n";
	delete meta;
	delete j;
	delete i;
	

	

	// //////////////////////////////////////////////////////////
	// //				  		 MY TESTS 		 			    //
	// //////////////////////////////////////////////////////////

	// #1
	
	std::cout << GREEN << "\n============ MY TESTS ============\n\n" << RESET;
	std::cout << "============ Animal by animal class ============\n";
	const Animal* pet = new Animal();
	std::cout << "I am " << pet->getType() << std::endl;
	pet->makeSound();
	delete pet;
	std::cout << std::endl;

	// #2

	std::cout << "============ Cat from cat class ============\n";
	const Cat* Kitty = new Cat();
	std::cout << "I am " << Kitty->getType() << std::endl;
	Kitty->makeSound();
	delete Kitty;
	std::cout << std::endl;

	// #3

	std::cout << "============ Cat from Animal class ============\n";
	const Animal* Katze = new Cat();
	std::cout << "I am " << Katze->getType() << std::endl;

	Katze->makeSound();
	delete Katze;
	std::cout << std::endl;
	



	// #4
	
	std::cout << GREEN << "\n============ MY TESTS DOG ============\n\n" << RESET;

	std::cout << "============  Dog from Dog class ============\n";
	const Dog* Barny = new Dog();
	std::cout << "I am " << Barny->getType() << std::endl;

	Barny->makeSound();
	delete Barny;
	std::cout << std::endl;

	// #5

	std::cout << "============ Dog from Animal class ============\n";
	const Animal* Buddy = new Dog();
	std::cout << "I am " << Buddy->getType() << std::endl;

	Buddy->makeSound();
	delete Buddy;
	std::cout << std::endl;
	

	//////////////////////////////////////////////////////////
	//					 MY "WRONG" TESTS 		 		    //
	//////////////////////////////////////////////////////////
	
	// #6
	
	std::cout << GREEN << "\n============ MY TESTS \"WRONG\" ============\n\n" << RESET;
	std::cout << "============ WrongAnimal by WrongAnimal class ============\n";
	const WrongAnimal* wrongPet = new WrongAnimal();
	std::cout << "I am " << wrongPet->getType() << std::endl;

	wrongPet->makeSound();
	delete wrongPet;
	std::cout << std::endl;

	// #7

	std::cout << "============ WrongCat from Wrongcat class ============\n";
	const WrongCat* wrongKitty = new WrongCat();
	std::cout << "I am " << wrongKitty->getType() << std::endl;
	std::cout << "============ Action tests ============\n";
	wrongKitty->makeSound();
	delete wrongKitty;
	std::cout << std::endl;

	// #8

	std::cout << "============ WrongCat from WrongAnimal class ============\n";
	const WrongAnimal* wrongKatze = new WrongCat();
	std::cout << "I am " << wrongKatze->getType() << std::endl;
	std::cout << "============ Action tests ============\n";
	wrongKatze->makeSound();
	delete wrongKatze;
	std::cout << std::endl;


	return 0;
}