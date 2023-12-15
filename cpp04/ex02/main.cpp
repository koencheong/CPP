#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Animal animal;
	// Animal *animal = new Animal();

	Animal *animal = new Dog();
	animal->makeSound();
	
	system("leaks a.out");
	return 0;
}