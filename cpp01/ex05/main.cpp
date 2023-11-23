#include "Harl.hpp"

int main()
{
	Harl harl;
	harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("unknown");
}

/*
Array of function pointers
- By declaring the array static within the function, no one else can
access the jump table
*/