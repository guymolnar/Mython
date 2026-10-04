#pragma once
#include "Sequence.h"

class String : public Sequence
{
public:
	String(const std::string& value) : _value(value) {};
	virtual bool isPrintable() const override;
	virtual std::string toString() const override;
private:
	std::string _value;
};