#include "String.h"

bool String::isPrintable() const
{
	return true;
}

std::string String::toString() const
{
	return this->_value.find("'") != std::string::npos ? '"' + this->_value + '"' : "'" + this->_value + "'";
}
