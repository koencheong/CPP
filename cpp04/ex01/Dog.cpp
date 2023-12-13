#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

// Dog dog2(dog1);
Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	// this->_type = other._type;
	// this->_brain = other._brain;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark!!!" << std::endl;
}