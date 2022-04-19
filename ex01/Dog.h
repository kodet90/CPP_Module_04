#ifndef CPP_MODULE_04_EX01_DOG_H
#define CPP_MODULE_04_EX01_DOG_H
#include <iostream>
#include "Animal.h"
#include "Brain.h"

class Dog: public Animal {

public:
	Dog(std::string const & type = "Dog");
	Dog(Dog const & dog);
	virtual ~Dog();
	Dog &	operator=(Dog const & dog);

	Brain *	getBrain() const;

	void	makeSound() const;

private:
	Brain *	_brain;

};

std::ostream &	operator<<(std::ostream & o, Dog const & dog);

#endif //CPP_MODULE_04_EX01_DOG_H
