#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename;
		std::string s1;
		std::string s2;
		std::string line;
		size_t		pos;

		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];

		std::ifstream inputFile(filename);
		std::ofstream outputFile(filename + ".replace");
		if (!inputFile.is_open() || !outputFile.is_open())
		{
			std::cerr << "Error opening file." << std::endl;
			return (1);
		}

		while (std::getline(inputFile, line))
		{
			while ((pos = line.find(s1)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			}
			outputFile << line << std::endl;
		}
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Error usage: ./a.out <filename> <s1> <s2>";
}