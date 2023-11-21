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

#include "Zombie.hpp"

int main()
{
	Zombie foo("Foo");
	foo.announce();

	Zombie *zombie = newZombie("Koen");
	zombie->announce();
	
	randomChump("Mark");

	delete(zombie);
}
