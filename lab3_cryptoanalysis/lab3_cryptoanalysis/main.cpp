#include <iostream>
#include "collumn_decryptor.h"
#include "perestanovka.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	collumn_decryptor dec;
	dec.decrypt("�_����_�������������_�i����_���_�_�����_��_��_i_�����������");

	AnalyseText();
}