#pragma once
#include <string>
using namespace std;

class Coder 
{
private:
	int key;
public:
	Coder (int key);
	string encode (string text);
	string decode (string text);
};
