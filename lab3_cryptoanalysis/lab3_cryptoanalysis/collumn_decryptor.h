#pragma once

#include <string>

struct cd_result
{
	int best_eval;
	int permutation_id;
};

class collumn_decryptor
{
public:
	void decrypt(std::string message);
};
