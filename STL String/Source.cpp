#include <string>
#include <iostream>
using namespace std;

void main()
{
	string myString1 = "Hello World";
	string myString2 = myString1;
	string input;
	int cat_appearances = 0;

	if (myString1 == myString2)
	{
		cout << "strings are the same" << endl;
	}

	myString1 = "Goodbye!";

	cout << "myString2 = " << myString2 << endl;

	cout << "myString1 = " << myString1 << endl;

	if (myString1 != myString2)
	{
		cout << "strings are not the same" << endl;
	}

	myString2 += "... " + myString1;
	cout << "myString2 = " << myString2 << endl;

	int len1 = myString1.length();
	cout << "myString1 Length = " << len1 << endl;
	int len2 = myString2.length();
	cout << "myString2 Length = " << len2 << endl;

	for (int i = 0; i < myString1.length(); ++i)
	{
		cout << myString1[i];
	}



	getline(cin, input, '\n');
	for (int i = input.find("cat", 0); i != string::npos; i = input.find("cat", i))
	{
		cat_appearances++;
		i++;
	}
	cout << input;
	cout << cat_appearances;

	/*myString1 = "abcdefghijklmnop";
	myString2 = */

	system("pause");
}

