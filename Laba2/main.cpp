#include "Laba2Sourse.h"

int main()
{
	setlocale(LC_CTYPE, "rus");

	VerrnamCipher verCip;

	verCip.Encryption("TextForIP.txt", "Encryption.txt", "Key.txt");
	verCip.Decryption("out_Encryption.txt", "out_Key.txt", "Decryption.txt");

	return 0;
}