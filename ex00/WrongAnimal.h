#ifndef CPP_MODULE_04_EX00_WRONGANIMAL_H
#define CPP_MODULE_04_EX00_WRONGANIMAL_H
#include <iostream>

class WrongAnimal {

public:
	WrongAnimal(std::string const & type = "WrongAnimal");
	WrongAnimal(WrongAnimal const & wrong_animal);
	virtual ~WrongAnimal();
	WrongAnimal &	operator=(WrongAnimal const & wrong_animal);

	void	makeSound() const;

	std::string	getType() const;
	void		setType(std::string const & type);

protected:
	std::string	_type;

};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & wrong_animal);

#endif //CPP_MODULE_04_EX00_WRONGANIMAL_H
