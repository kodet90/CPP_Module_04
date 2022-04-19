#ifndef CPP_MODULE_04_EX00_WRONGCAT_H
#define CPP_MODULE_04_EX00_WRONGCAT_H
#include <iostream>
#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {

public:
	WrongCat(std::string const & type = "WrongCat");
	WrongCat(WrongCat const & wrong_cat);
	virtual ~WrongCat();
	WrongCat &	operator=(WrongCat const & wrong_cat);

	void	makeSound() const;
	
};

std::ostream &	operator<<(std::ostream & o, WrongCat const & wrong_cat);

#endif //CPP_MODULE_04_EX00_WRONGCAT_H
