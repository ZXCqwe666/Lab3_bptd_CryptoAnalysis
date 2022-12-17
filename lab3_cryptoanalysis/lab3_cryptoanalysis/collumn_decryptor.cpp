#include "collumn_decryptor.h"
#include "constant_tables.h"

void collumn_decryptor::decrypt(std::string message)
{
	cd_result result = evaluate_permutations(10, 6, message);
}
