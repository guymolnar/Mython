#pragma once


class Type
{
public:
	Type() : _isTemp(false) {};
	bool getIsTemp() const;
	void setIsTemp(bool IsTemp);
private:
	bool _isTemp;
};
