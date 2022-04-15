#pragma once
#include <string>
#include <filesystem>

class OptionsHandler
{
public:
	Init()

	bool IsValid()
	{
		return optionsAreValid;
	}
private:

	bool optionsAreValid = false;
	std::string* source;
	std::string* target;
};

