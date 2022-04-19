#ifndef CPP_MODULE_04_EX02_CAT_H
#define CPP_MODULE_04_EX02_CAT_H
#include <iostream>
#include "Animal.h"
#include "Brain.h"

class Cat: public Animal {

public:
	Cat(std::string const & type = "Cat");
	Cat(Cat const & cat);
	virtual ~Cat();
	Cat &	operator=(Cat const & cat);

	Brain *	getBrain() const;

	void	makeSound() const;

private:
	Brain *	_brain;
	
};

std::ostream &	operator<<(std::ostream & o, Cat const & cat);

#endif //CPP_MODULE_04_EX02_CAT_H
