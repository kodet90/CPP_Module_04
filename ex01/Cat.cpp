#include "Cat.h"

Cat::Cat(std::string const & type) : Animal(type) {
	std::cout << *this << " spawned" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const & cat) {
	std::cout << *this << " spawned to be a container for "
			  << cat << std::endl;
	this->_brain = nullptr;
	*this = cat;
}

Cat::~Cat() {
	std::cout << *this << " disappeared" << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & cat) {
	if (this != &cat) {
		std::cout << cat << " clones to " << *this << std::endl;
		this->_type = cat._type;
		delete this->_brain;
		this->_brain = new Brain;
	}
	return *this;
}

Brain *	Cat::getBrain() const {
	return this->_brain;
}

void 	Cat::makeSound() const {
	std::cout << *this << " makes sound: Meow!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Cat const & cat) {
	o << "Cat '" << cat.getType() << "'";
	return o;
}
