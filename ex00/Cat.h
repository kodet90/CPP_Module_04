#ifndef CPP_MODULE_04_EX00_CAT_H
#define CPP_MODULE_04_EX00_CAT_H
#include <iostream>
#include "Animal.h"

class Cat: public Animal {

public:
	Cat(std::string const & type = "Cat");
	Cat(Cat const & cat);
	virtual ~Cat();
	Cat &	operator=(Cat const & cat);

	void	makeSound() const;
	
};

std::ostream &	operator<<(std::ostream & o, Cat const & cat);

#endif //CPP_MODULE_04_EX00_CAT_H
