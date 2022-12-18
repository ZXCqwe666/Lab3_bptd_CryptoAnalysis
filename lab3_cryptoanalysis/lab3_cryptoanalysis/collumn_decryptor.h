#pragma once

#include <string>

struct cd_result
{
	int best_eval;
	int permutation_id;
	int rows;
	int cols;
	std::string str_result;
};

class collumn_decryptor
{
public:
	void decrypt(std::string message);
};
