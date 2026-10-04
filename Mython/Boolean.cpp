#include "Boolean.h"

bool Boolean::isPrintable() const
{
	return true;
}

std::string Boolean::toString() const
{
	return this->_value == true ? "True" : "False";
}
