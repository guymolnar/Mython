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


	Helper::trim(str);
	Type* type = getType(str);
	if (type == nullptr)
	{
		throw SyntaxException();
	}
	return type;
}

Type* Parser::getType(std::string str)
{
	Helper::trim(str);
	if (Helper::isInteger(str))
	{
		Integer* tempInt = new Integer(std::stoi(str));
		tempInt->setIsTemp(true);
		return tempInt;
	}
	else if (Helper::isBoolean(str))
	{
		Boolean* tempBool = new Boolean(str == "True" ? true : false);
		tempBool->setIsTemp(true);
		return tempBool;
	}
	else if (Helper::isString(str))
	{
		str = str.substr(1, str.length() - 2);
		String* tempString = new String(str);
		tempString->setIsTemp(true);
		return tempString;
	}
	else
	{
		return nullptr;
	}
}

bool Parser::isLegalVarName(const std::string& str)
{
	if (str.empty() || Helper::isDigit(str.front()))
	{
		return false;
	}
	for (const auto& ch : str)
	{
		if (!Helper::isDigit(ch) && !Helper::isUnderscore(ch) && !Helper::isLetter(ch))
		{
			return false;
		}
	}

}
