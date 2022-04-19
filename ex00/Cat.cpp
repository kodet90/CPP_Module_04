#include "Cat.h"

Cat::Cat(std::string const & type) : Animal(type) {
	std::cout << *this << " spawned" << std::endl;
}

Cat::Cat(Cat const & cat) {
	std::cout << *this << " spawned to be a container for "
			  << cat << std::endl;
	*this = cat;
}

Cat::~Cat() {
	std::cout << *this << " disappeared" << std::endl;
}

Cat &	Cat::operator=(Cat const & cat) {
	if (this != &cat) {
		std::cout << cat << " clones to " << *this << std::endl;
		this->_type = cat._type;
	}
	return *this;
}

void 	Cat::makeSound() const {
	std::cout << *this << " makes sound: Meow!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Cat const & cat) {
	o << "Cat '" << cat.getType() << "'";
	return o;
}
