#include "main.h"

int	main() {
	{
		Animal	animal("1");
		animal.setType("2");
		Animal	copy(animal);
		Animal	assign("3");
		assign = animal;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Cat	cat("1");
		cat.setType("2");
		Cat	copy(cat);
		std::cout << (copy.getBrain() != cat.getBrain() ? "Deep copy" : "Shallow copy") << std::endl;
		Cat	assign("3");
		assign = cat;
		std::cout << (assign.getBrain() != cat.getBrain() ? "Deep copy" : "Shallow copy") << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Dog	dog("1");
		dog.setType("2");
		Dog	copy(dog);
		std::cout << (copy.getBrain() != dog.getBrain() ? "Deep copy" : "Shallow copy") << std::endl;
		Dog	assign("3");
		assign = dog;
		std::cout << (assign.getBrain() != dog.getBrain() ? "Deep copy" : "Shallow copy") << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Brain	brain;
		Brain	copy(brain);
		Brain	assign;
		assign = brain;
		std::cout << std::endl;
	}
	std::cout << std::endl << "[SUBJECT]" << std::endl << std::endl;
	{
		Animal *array[4];

		array[0] = new Cat;
		std::cout << std::endl;
		array[1] = new Dog;
		std::cout << std::endl;
		array[2] = new Cat;
		std::cout << std::endl;
		array[3] = new Dog;
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
		{
			delete array[i];
			std::cout << std::endl;
		}
	}
	return 0;
}