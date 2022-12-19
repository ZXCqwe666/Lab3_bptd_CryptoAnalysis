#include <iostream>
#include "collumn_decryptor.h"
#include "perestanovka.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	collumn_decryptor dec;
	dec.decrypt("о_ернп_елибмнвонпивш_оiтнта_хис_с_ауани_пу_рмї_i_сеивтдепевр");

	AnalyseText();
}