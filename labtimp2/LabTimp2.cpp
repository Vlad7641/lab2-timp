#include "coder.h"
#include <iostream>
using namespace std;
void main ()
{
	int key;
	cout << "Input key: ";
	cin >> key;
	try 
	{
		Coder coder (key);
		while (1)
		{
			int operation;
			cout << "Input operation (1-encode, 2-decode, 3-exit): ";
			cin >> operation;
			string text;
			string result;
			switch (operation) 
			{
				case 1:
				cout << "Input open messege: ";
				cin.get();
				getline(cin, text);
				result = coder.encode (text);
				cout << "Encoded message: " << result << endl;
				break;
				case 2:
					cout << "Input encoded messege: ";
				cin.get();
				getline(cin, text);
				result = coder.decode (text);
				cout << "Decoded message: " << result << endl;
				break;
			default:
				return;
			}
		}
	}
	catch(char c)
	{
		cout << "Bad data: " << c << endl;
		cin.get();
		cin.get();
	}
	catch (...)
	{
		cout << "Bad key!!!" << endl;
		cin.get();
		cin.get();
	}
}
