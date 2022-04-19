#ifndef CPP_MODULE_04_EX02_BRAIN_H
#define CPP_MODULE_04_EX02_BRAIN_H
#include <iostream>
#ifndef CPP_MODULE_04_EX02_BRAIN_COUNT
#define CPP_MODULE_04_EX02_BRAIN_COUNT 100
#endif

class Brain {

public:
	Brain();
	Brain(Brain const & brain);
	virtual ~Brain();
	Brain &	operator=(Brain const & brain);

	std::string	getIdea(int i) const;
	void		setIdea(int i, std::string const & idea);

protected:
	std::string	_ideas[CPP_MODULE_04_EX02_BRAIN_COUNT];

};

std::ostream &	operator<<(std::ostream & o, Brain const & brain);

#endif //CPP_MODULE_04_EX02_BRAIN_H
