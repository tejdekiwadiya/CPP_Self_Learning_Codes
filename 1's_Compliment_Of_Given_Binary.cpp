/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
	string binary;
	string binary2;

public:
	void getinput()
	{
		cout << "Enter Binary Code:\t";
		cin >> binary;
	}

	void verify()
	{
		for (int i = 0; i < binary.length(); i++)
		{
			if (binary.at(i) != '0' && binary.at(i) != '1')
			{
				cout << "Given Input Is Invalid";

				exit(0);
			}
		}
	}

	void process()
	{
		void verify();
		cout << "1's Compliment Of Given Binary Is: ";
		for (int i = 0; i < binary.length(); i++)
		{
			if (binary.at(i) == '0')
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
	}
};

int main()
{
	cout << ">> Created By: Tej Dekiwadiya" << endl
		 << ">> Github: https://github.com/tejdekiwadiya" << endl
		 << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
		 << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
		 << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
		 << endl;

	binary obt1;
	obt1.getinput();
	obt1.verify();
	obt1.process();
	return 0;
}
