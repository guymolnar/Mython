#pragma once
#include <string>

class Type
{
public:
	Type() : _isTemp(false) {};
	bool getIsTemp() const;
	void setIsTemp(bool IsTemp);
	virtual bool isPrintable() const = 0;
	virtual std::string toString() const = 0;
private:
	bool _isTemp;
};
