// Stack allocation
// int main()
// {
// 	// All these variables get memory allocated on stack
// 	int a;
// 	int b[10];
// 	int n = 20;
// 	int c[n];
// }

// Heal allocation
// int main()
// {
// 	// This memory for 10 integers is allocated on heap.
// 	int *ptr = new int[10];
// }

// In a stack, the allocation and de-allocation are automatically 
// done by the compiler whereas, in heap, it needs to be done by 
// the programmer manually.

// A stack is not flexible, the memory size allotted cannot be
// changed whereas a heap is flexible, and the allotted memory 
// can be altered.

// If you need to return an object from a function and it must
// outlive the function call, heap allocation is typically required.

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);

	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " constructor called." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destructor called." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name); 

	return (newZombie);
}

void randomChump(std::string name)
{
	Zombie randomChump(name);
	randomChump.announce();
}

int main()
{
	Zombie foo("Foo");
	foo.announce();

	Zombie *zombie = newZombie("Koen");
	zombie->announce();
	
	randomChump("Mark");

	delete(zombie);
}
