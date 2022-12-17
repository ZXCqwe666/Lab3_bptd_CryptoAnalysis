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
	{3 , 97, {'ë', 'ä', 'ê', 'ò', 'â', 'ð', 'í', ' '}, 'à', {'ë', 'í', 'ñ', 'ò', 'ð', 'â', 'ê', 'ì'}, 12, 88},
	{80, 20, {'ÿ', 'å', 'ó', 'è', 'à', 'î', ' ', ' '}, 'á', {'î', 'û', 'å', 'à', 'ð', 'ó', ' ', ' '}, 81, 19},
	{68, 32, {'ÿ', 'ò', 'à', 'å', 'è', 'î', ' ', ' '}, 'â', {'î', 'à', 'è', 'û', 'ñ', 'í', 'ë', 'ð'}, 60, 40},
	{78, 22, {'ð', 'ó', 'à', 'è', 'å', 'î', ' ', ' '}, 'ã', {'î', 'à', 'ð', 'ë', 'è', 'â', ' ', ' '}, 69, 31},
	{72, 28, {'ð', 'ÿ', 'ó', 'à', 'è', 'å', 'î', ' '}, 'ä', {'å', 'à', 'è', 'î', 'í', 'ó', 'ð', 'â'}, 68, 32},
	{19, 81, {'ì', 'è', 'ë', 'ä', 'ò', 'ð', 'í', ' '}, 'å', {'í', 'ò', 'ð', 'ñ', 'ë', 'â', 'ì', 'è'}, 12, 88},
	{83, 17, {'ð', 'å', 'è', 'à', 'ó', 'î', ' ', ' '}, 'æ', {'å', 'è', 'ä', 'à', 'í', ' ', ' ', ' '}, 71, 29},
	{89, 11, {'î', 'å', 'à', 'è', '	', ' ', ' ', ' '}, 'ç', {'à', 'í', 'â', 'î', 'ì', 'ä', ' ', ' '}, 51, 49},
	{27, 73, {'ð', 'ò', 'ì', 'è', 'î', 'ë', 'í', ' '}, 'è', {'ñ', 'í', 'â', 'è', 'å', 'ì', 'ê', 'ç'}, 25, 75},
	{55, 45, {'ü', 'â', 'å', 'î', 'à', 'è', 'ñ', ' '}, 'ê', {'î', 'à', 'è', 'ð', 'ó', 'ò', 'ë', 'å'}, 73, 27},
	{77, 23, {'ã', 'â', 'û', 'è', 'å', 'î', 'à', ' '}, 'ë', {'è', 'å', 'î', 'à', 'ü', 'ÿ', 'þ', 'ó'}, 75, 25},
	{80, 20, {'ÿ', 'û', 'à', 'è', 'å', 'î',	' ', ' '}, 'ì', {'è', 'å', 'î', 'ó', 'à', 'í', 'ï', 'û'}, 73, 27},
	{55, 45, {'ä', 'ü', 'í', 'î', 'à', 'è', 'å', ' '}, 'í', {'î', 'à', 'è', 'å', 'û', 'í', 'ó', ' '}, 80, 20},
	{11, 89, {'ð', 'ï', 'ê', 'â', 'ò', 'í',	' ', ' '}, 'î', {'â', 'ñ', 'ò', 'ð', 'è', 'ä', 'í', 'ì'}, 15, 85},
	{65, 35, {'â', 'ñ', 'ó', 'à', 'è', 'å', 'î', ' '}, 'ï', {'î', 'ð', 'å', 'à', 'ó', 'è', 'ë', ' '}, 68, 32},
	{55, 45, {'è', 'ê', 'ò', 'à', 'ï', 'î', 'å', ' '}, 'ð', {'à', 'å', 'î', 'è', 'ó', 'ÿ' ,'û', 'í'}, 80, 20},
	{69, 31, {'ñ', 'ò', 'â', 'à', 'å', 'è', 'î', ' '}, 'ñ', {'ò', 'ê', 'î', 'ÿ', 'å', 'ü', 'ñ', 'í'}, 32, 68},
	{57, 43, {'÷', 'ó', 'è', 'à', 'å', 'î', 'ñ', ' '}, 'ò', {'î', 'à', 'å', 'è', 'ü', 'â', 'ð', 'ñ'}, 63, 37},
	{15, 85, {'ï', 'ò', 'ê', 'ä', 'í', 'ì', 'ð', ' '}, 'ó', {'ò', 'ï', 'ñ', 'ä', 'í', 'þ', 'æ', ' '}, 16, 84},
	{70, 30, {'í', 'à', 'å', 'î', 'è', ' ',	' ', ' '}, 'ô', {'è', 'å', 'î', 'à', 'å', 'î', 'à', ' '}, 81, 19},
	{90, 10, {'ó', 'å', 'î', 'à', 'û', 'è',	' ', ' '}, 'õ', {'î', 'è', 'ñ', 'í', 'â', 'ï', 'ð', ' '}, 43, 57},
	{69, 31, {'å', 'þ', 'í', 'à', 'è', ' ',	' ', ' '}, 'ö', {'è', 'å', 'à', 'û', ' ', ' ', ' ', ' '}, 93, 7	},
	{82, 18, {'å', 'à', 'ó', 'è', 'î', ' ',	' ', ' '}, '÷', {'å', 'è', 'ò', 'í', ' ', ' ', ' ', ' '}, 66, 34},
	{67, 33, {'ü', 'ó', 'û', 'å', 'î', 'à', 'è', 'â'}, 'ø', {'å', 'è', 'í', 'à', 'î', 'ë', ' ', ' '}, 68, 32},
	{84, 16, {'å', 'á', 'à', 'ÿ', 'þ', ' ',	' ', ' '}, 'ù', {'å', 'è', 'à', ' ', ' ', ' ', ' ', ' '}, 97, 3	},
	{0 ,100, {'ì', 'ð', 'ò', 'ñ', 'á', 'â', 'í', ' '}, 'û', {'ë', 'õ', 'å', 'ì', 'è', 'â', 'ñ', 'í'}, 56, 44},
	{0 ,100, {'í', 'ñ', 'ò', 'ë', '	', ' ',	' ', ' '}, 'ü', {'í', 'ê', 'â', 'ï', 'ñ', 'å', 'î', 'è'}, 24, 76},
	{14, 86, {'ñ', 'û', 'ì', 'ë', 'ä', 'ò', 'ð', 'í'}, 'ý', {'í', 'ò', 'ð', 'ñ', 'ê', ' ', ' ', ' '}, 0 ,100},
	{58, 42, {'ü', 'î', 'à', 'è', 'ë', 'ó',	' ', ' '}, 'þ', {'ä', 'ò', 'ù', 'ö', 'í', 'ï', ' ', ' '}, 11, 89},
	{43, 57, {'î', 'í', 'ð', 'ë', 'à', 'è', 'ñ', ' '}, 'ÿ', {'â', 'ñ', 'ò', 'ï', 'ä', 'ê', 'ì', 'ë'}, 16, 84},
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
	if(letter == 'a' || letter == 'e' || letter == 'è' || letter == 'î'
	|| letter == 'ó' || letter == 'û' || letter == 'ý' || letter == 'þ'
	|| letter == 'ÿ') return true;

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
				if (left == bitgram.left_letters[k]) eval += (100 + (k + 1));
			}

			bool l_glas = is_glas(left);
			eval += l_glas * bitgram.left_glas;
			eval += !l_glas * bitgram.left_sogl;
		}

		if (right != '_')
		{
			for (int k = 0; k < 8; k++)
			{
				if (right == bitgram.right_letters[k]) eval += (100 + (k + 1));
			}

			bool r_glas = is_glas(right);
			eval += r_glas * bitgram.right_glas;
			eval += !r_glas * bitgram.right_sogl;
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
	int variations = factorial(cols);

	PermutationGenerator::generate_permutations(cols);
	PermutationGenerator::print_permutations();

	for (int i = 0; i < variations; i++)
	{
		std::string permuted_str = permute_string(i, cols, str);
		int eval = evaluate_matrix(10, 6, permuted_str);

		if (eval > result.best_eval)
			result.best_eval = eval;
	}

	printf("encrypted string: %s \n", str.c_str());
	printf("permutations: %i \n", variations);
	printf("rows: %i cols: %i \n", rows, cols);
	printf("best evaluation: %i \n", result.best_eval);

	//decrypt using result.permutation_id
}