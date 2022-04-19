#ifndef CPP_MODULE_04_EX02_ANIMAL_H
#define CPP_MODULE_04_EX02_ANIMAL_H
#include <iostream>

class Animal {

public:
	Animal(std::string const & type = "Animal");
	Animal(Animal const & animal);
	virtual ~Animal();
	Animal &	operator=(Animal const & animal);

	virtual void	makeSound() const = 0;

	std::string	getType() const;
	void		setType(std::string const & type);

protected:
	std::string	_type;

};

std::ostream &	operator<<(std::ostream & o, Animal const & animal);

#endif //CPP_MODULE_04_EX02_ANIMAL_H
