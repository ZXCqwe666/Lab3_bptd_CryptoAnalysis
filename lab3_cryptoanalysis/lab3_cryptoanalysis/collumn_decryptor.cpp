#include "collumn_decryptor.h"
#include "constant_tables.h"

void collumn_decryptor::decrypt(std::string message)
{
	evaluate_permutations(10, 6, message);
	evaluate_permutations(12, 5, message);
	evaluate_permutations(15, 4, message);
	evaluate_permutations(20, 3, message);
}
