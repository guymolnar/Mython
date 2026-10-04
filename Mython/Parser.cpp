#include "Parser.h"
#include <iostream>


Type* Parser::parseString(std::string str)
{	
	if (str.empty())
	{
		return nullptr;
	}
	if (str.front() == ' ' || str.front() == '\t')
	{
		throw IndentationException();
	}

	std::cout << str << std::endl;

}


