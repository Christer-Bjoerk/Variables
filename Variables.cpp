#include <iostream>

using namespace std;

int main() 
{
	int num = 5; // Interger(Whole number)
	double dub= 42.2; // Floating point number (with decimals)
 	char character = 'X'; // Character
	string text = "My name"; // String (text)
	bool Boolean = true; // Boolean (true or false)

	if (!Boolean)
	{
		cout << text << " is " << character << " and I'm not " << num << " years old. ";
	}
	else if (Boolean)
	{
		cout << text << " is " << character << " and I am " << num << " years old. ";
	}

	return 0;
}