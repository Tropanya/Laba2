#include "Laba2Sourse.h"

#include <stdlib.h>
#include <time.h>

VerrnamCipher::VerrnamCipher()
{ }

void VerrnamCipher::Encryption(const std::string& filePath, const std::string& outFile, const std::string& outKey)
{
	std::string key;
	std::string sourse = ReadFile(filePath);

	srand(time(NULL));

	for (int i = 0; i < sourse.size(); ++i)
		key += rand() % 62 + 192;

	for (int i = 0; i < sourse.size(); i++)
		sourse[i] ^= key[i];

	WriteFile(outFile, sourse);
	WriteFile(outKey, key);
}

void VerrnamCipher::Decryption(const std::string& inFile, const std::string& inKey, const std::string& outFile)
{
	std::string key = ReadFile(inKey);
	std::string sourse = ReadFile(inFile);

	for (int i = 0; i < sourse.size(); i++)
		sourse[i] ^= key[i];

	WriteFile(outFile, sourse);
}