#pragma once

#include "permutation_generator.h"
#include <string>

struct bitgramm
{
	int left_glas;
	int left_sogl;
	char left_letters[8];

	char letter;

	char right_letters[8];
	int right_glas;
	int right_sogl;
};

bitgramm table_bitgramm[30]
{
	{3 , 97, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 12, 88},
	{80, 20, {'�', '�', '�', '�', '�', '�', ' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', ' ', ' '}, 81, 19},
	{68, 32, {'�', '�', '�', '�', '�', '�', ' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 60, 40},
	{78, 22, {'�', '�', '�', '�', '�', '�', ' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', ' ', ' '}, 69, 31},
	{72, 28, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 68, 32},
	{19, 81, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 12, 88},
	{83, 17, {'�', '�', '�', '�', '�', '�', ' ', ' '}, '�', {'�', '�', '�', '�', '�', ' ', ' ', ' '}, 71, 29},
	{89, 11, {'�', '�', '�', '�', '	', ' ', ' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', ' ', ' '}, 51, 49},
	{27, 73, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 25, 75},
	{55, 45, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 73, 27},
	{77, 23, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 75, 25},
	{80, 20, {'�', '�', '�', '�', '�', '�',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 73, 27},
	{55, 45, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', ' '}, 80, 20},
	{11, 89, {'�', '�', '�', '�', '�', '�',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 15, 85},
	{65, 35, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', ' '}, 68, 32},
	{55, 45, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�' ,'�', '�'}, 80, 20},
	{69, 31, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 32, 68},
	{57, 43, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 63, 37},
	{15, 85, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', ' '}, 16, 84},
	{70, 30, {'�', '�', '�', '�', '�', ' ',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', ' '}, 81, 19},
	{90, 10, {'�', '�', '�', '�', '�', '�',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', ' '}, 43, 57},
	{69, 31, {'�', '�', '�', '�', '�', ' ',	' ', ' '}, '�', {'�', '�', '�', '�', ' ', ' ', ' ', ' '}, 93, 7	},
	{82, 18, {'�', '�', '�', '�', '�', ' ',	' ', ' '}, '�', {'�', '�', '�', '�', ' ', ' ', ' ', ' '}, 66, 34},
	{67, 33, {'�', '�', '�', '�', '�', '�', '�', '�'}, '�', {'�', '�', '�', '�', '�', '�', ' ', ' '}, 68, 32},
	{84, 16, {'�', '�', '�', '�', '�', ' ',	' ', ' '}, '�', {'�', '�', '�', ' ', ' ', ' ', ' ', ' '}, 97, 3	},
	{0 ,100, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 56, 44},
	{0 ,100, {'�', '�', '�', '�', '	', ' ',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 24, 76},
	{14, 86, {'�', '�', '�', '�', '�', '�', '�', '�'}, '�', {'�', '�', '�', '�', '�', ' ', ' ', ' '}, 0 ,100},
	{58, 42, {'�', '�', '�', '�', '�', '�',	' ', ' '}, '�', {'�', '�', '�', '�', '�', '�', ' ', ' '}, 11, 89},
	{43, 57, {'�', '�', '�', '�', '�', '�', '�', ' '}, '�', {'�', '�', '�', '�', '�', '�', '�', '�'}, 16, 84},
};

int factorial(int n)
{
	int factorial = 1;

	for (int i = 1; i <= n; ++i) 
	{
		factorial *= i;
	}

	return factorial;
}

bool is_glas(char letter)
{
	if(letter == 'a' || letter == 'e' || letter == '�' || letter == '�'
	|| letter == '�' || letter == '�' || letter == '�' || letter == '�'
	|| letter == '�') return true;

	return false;
}

int evaluate_letter(char letter, char left, char right)
{
	bitgramm bitgram;
	int eval = 0;

	for (int i = 0; i < 30; i++)
	{
		bitgram = table_bitgramm[i];

		if (letter != bitgram.letter) continue;

		if (left != '_')
		{
			for (int k = 0; k < 8; k++)
			{
				if (left == bitgram.left_letters[k]) eval += 100;
			}

			bool l_glas = is_glas(left);
			if(l_glas) eval += bitgram.left_glas;
			else eval += bitgram.left_sogl;
		}

		if (right != '_')
		{
			for (int k = 0; k < 8; k++)
			{
				if (right == bitgram.right_letters[k]) eval += 100;
			}

			bool r_glas = is_glas(right);
			if (r_glas) eval += bitgram.right_glas;
			else eval += bitgram.right_sogl;
		}
	}

	return eval;
};

int evaluate_row(const std::string& word)
{
	int eval = 0;

	for (int i = 0; i < word.size(); i++)
	{
		int left_id = i - 1;
		char left_ch = left_id >= 0 ? word[left_id] : '_';

		int right_id = i + 1;
		char right_ch = right_id < word.size() ? word[right_id] : '_';

		eval += evaluate_letter(word[i], left_ch, right_ch);
	}

	return eval;
}

int evaluate_matrix(int rows, int cols, const std::string& str)
{
	int eval = 0;

	std::string row_word;
	row_word.resize(cols);

	for (int i = 0; i < rows; i++)
	{
		int start_id = cols * i;

		for (int k = 0; k < cols; k++)
		{
			row_word[k] = str[start_id + k];
		}

		eval += evaluate_row(row_word);
	}

	return eval;
}

std::string permute_string(int permutation_id, int permutation_size, const std::string& str)
{
	return str;
}

cd_result evaluate_permutations(int rows, int cols, const std::string& str)
{
	cd_result result = {0,0};
	std::string permuted_str = str;
	int variations = factorial(cols);

	if (!PermutationGenerator::generate_permutations(cols))
	{
		return result;
	}

	for (int i = 0; i < variations; i++)
	{
		PermutationGenerator::permute_string_collums(i, cols, rows, permuted_str, str);
		int eval = evaluate_matrix(rows, cols, permuted_str);

		if (eval > result.best_eval)
		{
			result.best_eval = eval;
			result.permutation_id = i;
		}
	}

	printf("encrypted string: %s \n", str.c_str());
	PermutationGenerator::print_string_matrix(cols, rows, str);

	printf("permutations: %i \n", variations);
	printf("rows: %i cols: %i \n", rows, cols);
	printf("best evaluation: %i \n", result.best_eval);

	PermutationGenerator::permute_string_collums(result.permutation_id, cols, rows, permuted_str, str);
	printf("best evaluated string: %s \n", permuted_str.c_str());
	PermutationGenerator::print_string_matrix(cols, rows, permuted_str);

	return result;
}
