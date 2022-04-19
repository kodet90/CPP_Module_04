#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(std::string const & type) : _type(type) {
	std::cout << *this << " spawned" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & wrong_animal) {
	std::cout << *this << " spawned to be a container for "
	<< wrong_animal << std::endl;
	*this = wrong_animal;
}

WrongAnimal::~WrongAnimal() {
	std::cout << *this << " disappeared" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & wrong_animal) {
	if (this != &wrong_animal) {
		std::cout << wrong_animal << " clones to " << *this << std::endl;
		this->_type = wrong_animal._type;
	}
	return *this;
}

void 	WrongAnimal::makeSound() const {
		std::cout << *this << " doesn't make a sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->_type;
}

void	WrongAnimal::setType(std::string const & type) {
	this->_type = type;
}

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & wrong_animal) {
	o << "WrongAnimal '" << wrong_animal.getType() << "'";
	return o;
}
