#include <iostream>
#include "collumn_decryptor.h"

int main()
{
	setlocale(LC_CTYPE, "ukr");

	collumn_decryptor dec;
	dec.decrypt("�_����_�������������_�i����_���_�_�����_��_��_i_�����������");
}