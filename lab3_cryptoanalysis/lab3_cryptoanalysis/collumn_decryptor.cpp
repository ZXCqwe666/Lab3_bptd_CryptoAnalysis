#include "collumn_decryptor.h"
#include "console.h"

void collumn_decryptor::decrypt(std::string message)
{
	console::print("ecrypted message:"); tab
	console::print(message); tab

	int size = message.size();
	console::print("size: ");
	console::print(size); tab
}
