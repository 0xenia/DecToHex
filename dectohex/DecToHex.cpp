#include "DecToHex.h"

DecToHex::DecToHex()
{
}

DecToHex::~DecToHex()
{
}

void DecToHex::ConvertDecToHex()
{
	std::string input;

	std::cout << "Decimal byte degerlerini girin:\n";
	std::getline(std::cin, input);

	std::stringstream ss(input);
	int byte;
	while (ss >> byte) {
		if (byte >= 0 && byte <= 255) {
			DecimalBytes.push_back(byte);
		}
		else {
			std::cout << "Hatali deger: " << byte << "\n";
		}

		if (ss.peek() == ',') {
			ss.ignore();
		}
		if (ss.peek() == ' ') {
			ss.ignore();
		}
	}

	std::cout << "Hexadecimal karsiliklari:\n";
	for (int decimalByte : DecimalBytes)
	{
		std::cout << "0x" << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << decimalByte << " ";
	}
}