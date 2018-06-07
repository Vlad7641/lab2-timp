#include "coder.h"
#include <cctype>
using namespace std;
Coder::Coder (int key)
{
	if ((key %26) == 0)
		throw exception();
	this->key = key;
}
string Coder::encode (string text)
{
	string result = "";
	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			char c = toupper(text[i]);
			result +=( c + this->key - 'A') % 26 + 'A';
		}
		else if (!ispunct(text[i]) && !isspace(text[i]))
		{
			throw text[i];
		}
		
	}
	return result;
}

string Coder::decode (string text)
{
	string result = "";
	for (int i = 0; i < text.length(); i++)
	{
		if  (isalpha(text[i]))
		{
			char c = toupper(text[i]);
		result +=( c - this->key - 'Z') % 26 + 'Z';
		}
		else if (!ispunct(text[i])&& !isspace(text[i]))
		{
			throw text[i];
		}
	}
	return result;
}
