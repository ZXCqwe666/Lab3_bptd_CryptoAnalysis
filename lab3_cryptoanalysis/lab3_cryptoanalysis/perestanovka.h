#pragma once

#include <iostream>
#include <unordered_map>
#include <algorithm>

#define SP 100 // space ' '
#define CM 101 // coma	','
#define DT 102 // dot	'.'
#define TR 103 // defis '-'

struct letter_freq
{
	char letter;
	float frequency;
};

struct letter_code
{
	int code;
	char letter;
};

std::vector<letter_freq> letter_freq_table
{
	{'�',0.090f},
	{'�',0.072f},
	{'�',0.062f},
	{'�',0.062f},
	{'�',0.053f},
	{'�',0.053f},
	{'�',0.045f},
	{'�',0.040f},
	{'�',0.038f},
	{'�',0.035f},
	{'�',0.028f},
	{'�',0.026f},
	{'�',0.025f},
	{'�',0.023f},
	{'�',0.021f},
	{'�',0.018f},
	{'�',0.016f},
	{'�',0.016f},
	{'�',0.014f},
	{'�',0.014f},
	{'�',0.013f},
	{'�',0.012f},
	{'�',0.010f},
	{'�',0.009f},
	{'�',0.007f},
	{'�',0.006f},
	{'�',0.006f},
	{'�',0.004f},
	{'�',0.003f},
	{'�',0.003f},
	{'�',0.002f}
};

std::vector<letter_code> letter_codes
{
	{46, '�'}, //100%
	{32, '�'}, //100%
	{55, '�'}, //100%
	{99, '�'}, //100%
	{37, '�'}, //100%
	{57, '�'}, //100%
	{52, '�'}, //100%
	{60, '�'}, //100%
	{25, '�'}, //100%
	{12, '�'},
	{67, '�'}, //100%
	{19, '�'}, //100% - ��
	{75, '�'},
	{91, '�'},
	{15, '�'}, //100%
	{20, '�'}, //100%
	{11, '�'},
	{30, '�'}, //100%
	{28, '�'},
	{63, '�'}, 
	{39, '�'}, //100%
	{36, '�'}, //100%
	{78, '�'}, //100%
	{18, '�'},
	{41, '�'},
	{48, '�'}, //100%
	{61, '�'},
	{74, '�'},
	{DT, '.'},
	{CM, ','},
	{TR, '-'},
	{SP, ' '}
};


const int size = 648;

int message[size] =
{
	15, 48, 32, SP,
	52, 32, SP,
	60, SP,
	67, 32, 25, 60, 19, 36, SP,
	25, 55, 20, SP,
	91, 55, 20, 15, 25, 15, SP,
	67, 25, 99, 63, 46, 11, 99, 12, 46, SP,
	60, SP,
	78, 46, 12, 46, 60, 15, CM, SP,
	28, 57, 46, SP,
	28, 99, 52, CM, SP,
	46, 57, 60, 32, 28, 55, 60, 18, 99, 36, SP,

	// 2 rows - last word

	20, 55, SP,
	30, 32, 20, 46, 67, 55, 37, 52, 46, 37, 57, 39, SP,
	30, 55, 20, 19, CM, SP,
	30, 19, 12, 75, 12, 55, 37, 37, 99, 28, 32, 37, 75, 99, 91, SP,
	37, 15, 63, 46, 67, 15, 57, 28, 99, 75, 46, 91, DT, SP,
	60, SP,

	// 4 rows

	37, 60, 46, 32, SP,
	60, 25, 32, 91, 41, SP,
	46, 52, SP,
	67, 46, 25, 55, 30, 46, 57, 55, 12, SP,
	52, 55, SP,
	37, 46, 60, 32, 37, 57, 39, CM, SP,
	46, 30, 46, 25, 15, 11, 46, 60, 55, 60, SP,
	37, 15, 63, 46, 67, 15, 57, 52, 19, 32, SP,
	67, 46, 11, 37, 57, 15, 67, 19, SP,
	75, SP,
	30, 55, 20, 32, SP,
	32, 91, 75, 46, 37, 57, 52, 19, 91, 99, SP,
	11, 55, 57, 28, 99, 75, 55, 91, 99, CM, SP,

	// 7 rows - last word

	37, 99, 78, 52, 55, 12, 39, 52, 19, 91, 99, SP,
	25, 55, 75, 32, 57, 55, 91, 99, CM, SP,
	67, 25, 99, SP,
	91, 55, 12, 32, 36, 18, 32, 91, SP,
	67, 25, 99, 75, 46, 37, 52, 46, 60, 32, 52, 99, 99, SP,
	75, SP,
	57, 46, 52, 61, 37, 32, 52, 39, 75, 46, 36, SP,
	52, 99, 57, 99, SP,
	60, 20, 12, 32, 57, 55, 60, 18, 99, 91, 99, SP,
	60, SP,
	52, 32, 30, 32, 37, 55, 37, 46, SP,

	// 10 rows - last word

	37, 60, 99, 37, 57, 46, 91, CM, SP,
	25, 55, 37, 37, 19, 67, 55, 41, SP,
	60, 46, 25, 46, 63, 55, SP,
	25, 55, 20, 52, 46, 74, 60, 32, 57, 52, 19, 63, SP,
	46, 37, 12, 32, 67, 99, 57, 32, 12, 39, 52, 19, 63, SP,
	99, 37, 75, 25, SP,
	TR, SP,
	99, SP,
	11, 55, 48, 32, SP,
	67, 46, 12, 46, 37, 55, 91, 99, SP,
	67, 25, 46, 57, 99, 60, 46, 67, 32, 63, 46, 57, 52, 19, 63, SP,
	91, 99, 52, DT, SP,
	28, 57, 46, SP,
	75, 55, 37, 55, 32, 57, 37, 41, SP,
	67, 46, 11, 37, 57, 15, 67, 46, 60, SP,
	60, 46, 11, 52, 19, 63, SP,
	28, 99, 52, SP,
	30, 19, 12, SP,
	52, 32, SP,
	57, 55, 75, SP,
	25, 32, 57, 99, 60, DT, SP,
	46, 11, 52, 99, 57, 46, 12, 39, 75, 46, SP,
	37, 57, 46, 12, 30, 19, SP,
	37, SP,
	75, 46, 12, 61, 28, 75, 46, 36, SP,
	99, SP,
	67, 25, 32, 37, 12, 46, 60, 15, 57, 19, 32, SP,
	37, 67, 99, 25, 55, 12, 39, 75, 99, SP,
	TR, SP,
	75, 46, 57, 46, 25, 19, 32, SP,
	52, 32, 20, 60, 55, 52, 19, 32, SP,

	// end of page

	78, 46, 37, 57, 99, CM, SP,
	60, SP,
	46, 57, 12, 99, 28, 99, 32, SP,
	46, 57, SP,
	20, 11, 32, 18, 52, 99, 63, SP,
	67, 55, 25, 57, 99, 20, 55, 52, CM, SP,
	15, 91, 32, 12, 99, SP,
	67, 25, 32, 46, 11, 46, 12, 32, 60, 55, 57, 39, SP,
	30, 19, 37, 57, 25, 46, SP,
	99, SP,
	30, 32, 20, SP,
	91, 55, 12, 32, 36, 18, 32, 78, 46, SP,
	60, 25, 32, 11, 55, SP,
	11, 12, 41, SP,
	37, 46, 30, 37, 57, 60, 32, 52, 52, 46, 78, 46, SP,
	46, 25, 78, 55, 52, 99, 20, 91, 55, DT, SP,
	99, SP,
	60, 37, 32, DT
};

struct code_count
{
	int code;
	int count;
};

bool compare_cc(code_count c1, code_count c2)
{
	return (c1.count > c2.count);
}

bool IsLetter(int number)
{
	return number < 100;
}

void AnalyseText()
{
	// calculate code counts 

	int number_frequency[99] = { 0 };

	for (int i = 0; i < size; i++)
	{
		int number = message[i];

		if (IsLetter(number))
		number_frequency[number]++;
	}

	// sort code counts 

	std::vector<code_count> code_freq;

	for (int i = 0; i < 99; i++)
	{
		if(number_frequency[i] != 0)
		code_freq.push_back({i, number_frequency[i]});
	}

	std::sort(code_freq.begin(), code_freq.end(), compare_cc);

	for (int i = 0; i < code_freq.size(); i++)
	{
		std::cout << "code: " << code_freq[i].code << " count: " << code_freq[i].count << "\n";
	}

	// decode string - most frequent

	std::string str = "";
	str.resize(size);

	for(int i = 0; i < code_freq.size(); i++)
	{
		code_count cc = code_freq[i];
		char letter = letter_freq_table[i].letter;

		for (int n = 0; n < size; n++)
		{
			if (cc.code == message[n])
			{
				str[n] = letter;
			}
		}
	}

	for (int n = 0; n < size; n++)
	{
		if (message[n] == DT) str[n] = '.';
		if (message[n] == CM) str[n] = ',';
		if (message[n] == TR) str[n] = '-';
		if (message[n] == SP) str[n] = ' ';
	}

	std::cout << str << "\n\n";

	// decode "trying by hand"

	std::string str_decoded = "";
	str_decoded.resize(size);

	for (int n = 0; n < size; n++)
	{
		for (int i = 0; i < letter_codes.size(); i++)
		{
			letter_code lc = letter_codes[i];

			if (message[n] == lc.code)
				str_decoded[n] = lc.letter;
		}
	}

	std::cout << str_decoded << "\n\n";
}