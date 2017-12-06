#ifndef LABA2SOURSE_H
#define LABA2SOURSE_H

#include "FileUtils.h"

class VerrnamCipher
{
public:
	VerrnamCipher();

	void Encryption(const std::string& filePath, const std::string& outFile, const std::string& outKey);
	void Decryption(const std::string& inFile, const std::string& inKey, const std::string& outFile);
};

#endif // LABA2SOURSE_H