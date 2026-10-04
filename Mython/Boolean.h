#pragma once
#include "Type.h"

class Boolean : public Type
{
public:
	Boolean(bool value) : _value(value) {};
	virtual bool isPrintable() const override;
	virtual std::string toString() const override;

private:
	bool _value;
};