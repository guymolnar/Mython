#pragma once
#include "InterpreterException.h"
#include "IndentationException.h"
#include "SyntaxException.h"
#include "Type.h"
#include "Helper.h"
#include "Integer.h"
#include "Boolean.h"
#include "String.h"
#include "Sequence.h"
#include "Void.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <unordered_map>


class Parser
{
public:
	static Type* parseString(std::string str);
	static Type* getType(std::string str);
	static bool isLegalVarName(const std::string& str);
private:
	static std::unordered_map<std::string, Type*> _variables;
};
