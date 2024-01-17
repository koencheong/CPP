#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename;
		std::string s1;
		std::string s2;

		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];

		Replacer::findReplace(filename, s1, s2);
	}
	else
		std::cout << "Error usage: ./a.out <filename> <s1> <s2>";

	system("leaks a.out");
}