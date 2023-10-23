#pragma once
#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

class DecToHex
{
private:
	std::vector<int> DecimalBytes;
public:
	DecToHex();
	~DecToHex();
	void ConvertDecToHex();
};
