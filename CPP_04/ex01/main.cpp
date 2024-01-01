/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:34 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:36:59 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/Dog.hpp"
#include "includes/Colors.hpp"
#include "includes/Brain.hpp"


int main ()
{		
	// /////////////////////////////////////////////////////////
	// //					TESTS FROM SUBJECT			      //
	// /////////////////////////////////////////////////////////
	std::cout << GREEN << "============ MAIN FROM SUBJECT ============\n\n" << RESET;
	const Animal* j = new Dog(); const Animal* i = new Cat();
	delete j;//should not create a leak 
	delete i;
	

	
	std::cout << GREEN << "============ TESTS FROM SUBJECT ============\n\n" << RESET;
	
	//#1
	
	std::cout << "============ Animal array creation ============\n";	

	int number_of_animals = 4;
	Animal* arr[number_of_animals];
	for(int k = 0; k < number_of_animals; k++)
	{
		std::cout << "pet #" << k+1 << std::endl;
		if(k < number_of_animals/2)
		{
			arr[k] = new Dog;
		}
		else 
		{
			arr[k] = new Cat;	
		}			
	}
	
	for(int k = 0; k < number_of_animals; k++)
	{
		std::cout << "pet #" << k+1 << std::endl;
		arr[k]->makeSound();			
	}
			
	for(int k = 0; k < number_of_animals; k++)
	{
		std::cout << "pet #" << k+1 << std::endl;
		delete arr[k];				
	}
	
	
	//////////////////////////////////////////////////////////
	//				  		 MY TESTS 		 			    //
	//////////////////////////////////////////////////////////
	
	// ========================= DOG ========================= //
	
	std::cout << GREEN << "\n============ MY TESTS DOG ============\n\n" << RESET;

	//#2

	std::cout << "============ Dog # 1 ============\n";
	const Dog* Barny = new Dog();
	std::cout << "I am " << Barny->getType() << " Barny" << std::endl;
	// Do Woof-Woof!
	Barny->makeSound();
	// Set some ideas
	Barny->getBrain()->setIdea("I wanna walk!", 0);
	Barny->getBrain()->setIdea("I wanna eat!", 1);
	Barny->getBrain()->setIdea("I wanna sleep!", 2);

	//Show some ideas
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 1st idea is : \"" << Barny->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 2nd idea is : \"" << Barny->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 3rd idea is : \"" << Barny->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;
	
	//New dog
	std::cout << "============ Copy new dog and check ============\n";
	
	std::cout << "I am " << Barny->getType() << " Jessy (a copy of Barny)" << std::endl;
	Dog *Jessy = new Dog(*Barny);
	
	//Show some Jessys (a copy of Barny) ideas

	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 1st idea is : \"" << Jessy->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 2nd idea is : \"" << Jessy->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 3rd idea is : \"" << Jessy->getBrain()->getIdea(2) << "\"" << RESET << std::endl;

	//Change 1st dog's ideas
	std::cout << "============ Change 1st dog's ideas and check ============\n";

	Barny->getBrain()->setIdea("Let's go play!", 0);
	Barny->getBrain()->setIdea("Let's go play in garden!", 1);
	Barny->getBrain()->setIdea("Let's go play! with my cat friend", 2);

	//Show updated ideas
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 1st idea is : \"" << Barny->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 2nd idea is : \"" << Barny->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barny->getType() << "! My 3rd idea is : \"" << Barny->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;
	
	//Check that 2nd dog's ideas haven't been changed
	std::cout << "============ Check that 2nd dog's ideas haven't been changed ============\n";

	//Show some ideas
	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 1st idea is : \"" << Jessy->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 2nd idea is : \"" << Jessy->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Jessy->getType() << "! My 3rd idea is : \"" << Jessy->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;

	//Destructors called
	std::cout << "============ Destructors called ============\n";
	
	delete Barny;
	delete Jessy;
	std::cout << std::endl;

		
	// ========================= CAT ========================= //


	std::cout << GREEN << "\n============ MY TESTS CAT ============\n\n" << RESET;

	//#3
	std::cout << "============ Cat #1 ============\n";
	const Cat* Barsique = new Cat();
	std::cout << "I am " << Barsique->getType() << " Barsique" << std::endl;
	// Do Meow-Meow!
	Barsique->makeSound();
	// Set some ideas
	Barsique->getBrain()->setIdea("I wanna hunt on mouses!", 0);
	Barsique->getBrain()->setIdea("I wanna my Whiskas!", 1);
	Barsique->getBrain()->setIdea("I wanna sleep!", 2);
	
	//Show some ideas
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 1st idea is : \"" << Barsique->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 2nd idea is : \"" << Barsique->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 3rd idea is : \"" << Barsique->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;
		
	//New cat
	std::cout << "============ Copy new Cat and check ============\n";
	
	std::cout << "I am " << Barsique->getType() << " Chi (a copy of Barsique)" << std::endl;
	Cat *Chi = new Cat(*Barsique);	
	//Show some Chis (a copy of Barsique) ideas

	std::cout << YELLOW << "I am " << Chi->getType() << "! My 1st idea is : \"" << Chi->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Chi->getType() << "! My 2nd idea is : \"" << Chi->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Chi->getType() << "! My 3rd idea is : \"" << Chi->getBrain()->getIdea(2) << "\"" << RESET << std::endl;

	std::cout << "============ Change 1st cat's ideas and check ============\n";

	Barsique->getBrain()->setIdea("Let's do nothing!", 0);
	Barsique->getBrain()->setIdea("I am Boss in a house", 1);
	Barsique->getBrain()->setIdea("I am splept over the whole day!", 2);
	
	//Show updated ideas
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 1st idea is : \"" << Barsique->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 2nd idea is : \"" << Barsique->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Barsique->getType() << "! My 3rd idea is : \"" << Barsique->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;
	

	//Check that 2nd dog's ideas haven't been changed
	std::cout << "============ Check that 2nd cat's ideas haven't been changed ============\n";
	
	std::cout << YELLOW << "I am " << Chi->getType() << "! My 1st idea is : \"" << Chi->getBrain()->getIdea(0) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Chi->getType() << "! My 2nd idea is : \"" << Chi->getBrain()->getIdea(1) << "\"" << RESET << std::endl;
	std::cout << YELLOW << "I am " << Chi->getType() << "! My 3rd idea is : \"" << Chi->getBrain()->getIdea(2) << "\"" << RESET << std::endl;
	std::cout << std::endl;
	

	std::cout << "============ Destructors called ============\n";
	
	delete Barsique;
	delete Chi;
	std::cout << std::endl << std::endl << std::endl;


	std::cout << "============ CHECK BRAINS ============\n";
	Cat* cat1 = new Cat;
	Cat* cat2 = new Cat(*cat1);

	//*cat2=*cat1;
	
	std::cout << YELLOW << cat1->getBrain() << RESET << std::endl;
	std::cout << YELLOW << cat2->getBrain() << RESET << std::endl;
	delete cat1;
	delete cat2;
	
	
	return 0;
}