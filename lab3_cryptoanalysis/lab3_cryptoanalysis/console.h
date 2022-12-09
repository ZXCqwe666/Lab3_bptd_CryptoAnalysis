#pragma once

#include <iostream>
#include <string>

#define tab std::cout << "\n";

class console
{
public:
	static void print(std::string message)
	{
		std::cout << message;
	};

	static void print(int message)
	{
		std::cout << message;
	};
};