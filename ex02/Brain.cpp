#include "Brain.h"

Brain::Brain() {
	std::cout << *this << " spawned" << std::endl;
}

Brain::Brain(Brain const & brain) {
	std::cout << *this << " spawned to be a container for "
	<< brain << std::endl;
	*this = brain;
}

Brain::~Brain() {
	std::cout << *this << " disappeared" << std::endl;
}

Brain &	Brain::operator=(Brain const & brain) {
	if (this != &brain) {
		std::cout << brain << " clones to " << *this << std::endl;
		for (int i = 0; i < CPP_MODULE_04_EX02_BRAIN_COUNT; i++) {
			this->_ideas[i] = brain._ideas[i];
		}
	}
	return *this;
}

std::string	Brain::getIdea(int i) const {
	return this->_ideas[i];
}

void		Brain::setIdea(int i, std::string const & idea) {
	this->_ideas[i] = idea;
}

std::ostream &	operator<<(std::ostream & o, Brain const & brain) {
	o << "Brain 'with " << CPP_MODULE_04_EX02_BRAIN_COUNT << " ideas'";
	static_cast<void>(brain);
	return o;
}
