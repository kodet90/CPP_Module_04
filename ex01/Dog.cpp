#include "Dog.h"

Dog::Dog(std::string const & type) : Animal(type) {
	std::cout << *this << " spawned" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const & dog) {
	std::cout << *this << " spawned to be a container for "
			  << dog << std::endl;
	this->_brain = nullptr;
	*this = dog;
}

Dog::~Dog() {
	std::cout << *this << " disappeared" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & dog) {
	if (this != &dog) {
		std::cout << dog << " clones to " << *this << std::endl;
		this->_type = dog._type;
		delete this->_brain;
		this->_brain = new Brain;
	}
	return *this;
}

Brain *	Dog::getBrain() const {
	return this->_brain;
}

void 	Dog::makeSound() const {
	std::cout << *this << " makes sound: Bark!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Dog const & dog) {
	o << "Dog '" << dog.getType() << "'";
	return o;
}
