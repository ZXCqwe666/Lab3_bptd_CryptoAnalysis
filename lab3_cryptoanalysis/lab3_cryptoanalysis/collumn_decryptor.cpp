#include "collumn_decryptor.h"
#include "constant_tables.h"

void collumn_decryptor::decrypt(std::string message)
{
	std::vector<cd_result> results;

	int size = message.size();

	for (int cols = 3; cols <= 10; cols++)
	{
		if (size % cols == 0)
		{
			int rows = size / cols;

			if(cols < rows)
			results.push_back(evaluate_permutations(rows, cols, message));
		}
	}

	cd_result best_result = results[0];
	for (int i = 0; i < results.size(); i++)
	{
		if(results[i].best_eval > best_result.best_eval)
		best_result = results[i];
	}

	printf("[SUMMARY] rows: %i cols: %i best_evaluation: %i \n", best_result.rows, best_result.cols, best_result.best_eval);
	printf("[DECRYPTED MESSAGE] %s \n", best_result.str_result.c_str());

	printf("[COLS ORDER] ");
	for (int i = 0; i < best_result.cols; i++)
	{
		int start_id = best_result.permutation_id * best_result.cols;
		printf("%i", PermutationGenerator::permutations[start_id + i]);
	}
	printf("\n");

	PermutationGenerator::print_string_matrix(best_result.cols, best_result.rows, best_result.str_result);
}
