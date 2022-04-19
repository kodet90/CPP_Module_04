#include "main.h"

int	main() {
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const WrongAnimal *i = new WrongCat();
		const WrongCat *j = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound(); //will not output the cat sound!
		j->makeSound(); //will output the cat sound!
		std::cout << std::endl;
		delete i;
		delete j;
	}
	return 0;
}