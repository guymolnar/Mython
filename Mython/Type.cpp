#include "Type.h"

bool Type::isTemp() const
{
	return this->_isTemp;
}

void Type::setIsTemp(bool isTemp)
{
	this->_isTemp = isTemp;
}