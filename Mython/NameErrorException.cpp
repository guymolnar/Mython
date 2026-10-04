#include "NameErrorException.h"


const char* NameErrorException::what() const noexcept
{
	return _message.c_str();
}