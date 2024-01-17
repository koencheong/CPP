#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>

class Replacer
{
	public:
		static void findReplace(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif
