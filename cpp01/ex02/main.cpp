#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;	
	std::cout << "Memory address of string variable: " << &string << std::endl;
	std::cout << "Memory address of stringPTR      : " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF      : " << &stringREF << std::endl;

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "String   : " << string << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

/*
(1) Initializing Pointers via the Address-Of Operator (&)
When you declare a pointer variable, its content is not initialized.
In other words, it contains an address of "somewhere", which is of course not a valid location.
This is dangerous! You need to initialize a pointer by assigning it a valid address.
This is normally done via the address-of operator (&).
The address-of operator (&) operates on a variable, and returns the address of the variable.
For example, if number is an int variable, &number returns the address of the variable number.
You can use the address-of operator to get the address of a variable, and assign the address to a pointer variable.
For example,
int number = 88;     // An int variable with a value
int * pNumber;       // Declare a pointer variable called pNumber pointing to an int (or int pointer)
pNumber = &number;   // Assign the address of the variable number to pointer pNumber
 
int * pAnother = &number; // Declare another int pointer and init to address of the variable number

(2) References (or Aliases) (&)
Recall that C/C++ use & to denote the address-of operator in an expression. 
C++ assigns an additional meaning to & in declaration to declare a reference variable.
The meaning of symbol & is different in an expression and in a declaration. 
When it is used in an expression, & denotes the address-of operator,
which returns the address of a variable, e.g., if number is an int variable,
&number returns the address of the variable number (this has been described in the above section).
However, when & is used in a declaration (including function formal parameters),
it is part of the type identifier and is used to declare a reference variable
(or reference or alias or alternate name). It is used to provide another name,
or another reference, or alias to an existing variable.

Syntax:
type &newName = existingName;

It shall be read as "newName is a reference to exisitngName", or "newNew is an
alias of existingName". You can now refer to the variable as newName or existingName.
*/