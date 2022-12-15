#include "collumn_decryptor.h"
#include "constant_tables.h"
#include "console.h"

void collumn_decryptor::decrypt(std::string message)
{
	console::print("ecrypted message:"); tab
	console::print(message); tab

	int size = message.size();
	console::print("size: ");
	console::print(size); tab

	int rows = 10;
	int cols = 6;
	int best_eval = 0;

	int variations = factorial(cols);
	console::print("variations: ");
	console::print(variations); tab

	for (int i = 0; i < variations; i++)
	{
		int eval = evaluate_matrix(10, 6, message);

		if(eval > best_eval) 
		best_eval = eval;
	}

	console::print("6 10 best eval: ");
	console::print(best_eval); tab
}
