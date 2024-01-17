#include "Replace.hpp"

void Replacer::findReplace(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::string line;
	size_t		pos;
	
	std::ifstream inputFile(filename);
	std::ofstream outputFile(filename + ".replace");
	if (!inputFile.is_open() || !outputFile.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return ;
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