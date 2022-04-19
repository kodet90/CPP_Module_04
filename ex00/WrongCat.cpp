#include "WrongCat.h"

WrongCat::WrongCat(std::string const & type) : WrongAnimal(type) {
	std::cout << *this << " spawned" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wrong_cat) {
	std::cout << *this << " spawned to be a container for "
			  << wrong_cat << std::endl;
	*this = wrong_cat;
}

WrongCat::~WrongCat() {
	std::cout << *this << " disappeared" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & wrong_cat) {
	if (this != &wrong_cat) {
		std::cout << wrong_cat << " clones to " << *this << std::endl;
		this->_type = wrong_cat._type;
	}
	return *this;
}

void 	WrongCat::makeSound() const {
	std::cout << *this << " makes sound: Meow!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, WrongCat const & wrong_cat) {
	o << "WrongCat '" << wrong_cat.getType() << "'";
	return o;
}
