#pragma once
#include "InterpreterException.h"
#include "string"

class NameErrorException : public InterpreterException
{
public:
	NameErrorException(const std::string& name) : _name(name), _message("NameError: name '" + this->_name + "' is not defined") {}
	virtual const char* what() const noexcept;
private:
	std::string _name;
	std::string _message;
};
