#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2 && argv[1] != NULL)
	{
		std::string str;
		
		str = argv[1];
		if (str.compare("DEBUG") == 0)
			harl.complain(1);
		else if (str.compare("INFO") == 0)
			harl.complain(2);
		else if (str.compare("WARNING") == 0)
			harl.complain(3);
		else if (str.compare("ERROR") == 0)
			harl.complain(4);
		else
			harl.complain(0);
	}
	else
		std::cout << "Error! Usage: ./harlFilter DEBUG/INFO/WARNING/ERROR" << std::endl;
}