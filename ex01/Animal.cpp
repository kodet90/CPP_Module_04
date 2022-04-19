#include "Animal.h"

Animal::Animal(std::string const & type) : _type(type) {
	std::cout << *this << " spawned" << std::endl;
}

Animal::Animal(Animal const & animal) {
	std::cout << *this << " spawned to be a container for "
	<< animal << std::endl;
	*this = animal;
}

Animal::~Animal() {
	std::cout << *this << " disappeared" << std::endl;
}

Animal &	Animal::operator=(Animal const & animal) {
	if (this != &animal) {
		std::cout << animal << " clones to " << *this << std::endl;
		this->_type = animal._type;
	}
	return *this;
}

void 	Animal::makeSound() const {
		std::cout << *this << " doesn't make a sound" << std::endl;
}

std::string	Animal::getType() const {
	return this->_type;
}

void	Animal::setType(std::string const & type) {
	this->_type = type;
}

std::ostream &	operator<<(std::ostream & o, Animal const & animal) {
	o << "Animal '" << animal.getType() << "'";
	return o;
}
