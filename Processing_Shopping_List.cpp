/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;

class shop
{
	private:
		int no_item;
	int code_item[100], price_item[100];

	public:
		void getdata()
		{
			cout << "\n>> Enter Number Of Product Items: ";
			cin >> no_item;
			for (int i = 0; i < no_item; i++)
			{
				cout << ">> Enter Product Code: \t";
				cin >> code_item[i];

				cout << ">> Enter Product Price:\t";
				cin >> price_item[i];
			}

			cout << endl;
		}

	void displaydata()
	{
		cout << "\n>> Item Name\t >> Item Price" << endl;
		for (int i = 0; i < no_item; i++)
		{
			cout << ">> " << code_item[i];
			cout << "\t\t >> " << price_item[i] << endl;
		}

		cout << endl;
	}

	void displaytotal()
	{
		int total = 0;
		for (int i = 0; i < no_item; i++)
		{
			total = total + price_item[i];
		}

		cout << "\n>> Total: " << total << endl << endl;
	}

	void removeitem()
	{
		int remove;
		cout << ">> Enter Item Code Which You Remove: ";
		cin >> remove;
		cout << endl;

		for (int i = 0; i < no_item; i++)
		{
			if (code_item[i] == remove)
			{
				price_item[i] = 0;
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

	shop s1;

	int code;

	do {
		cout << "1. Add An Item & Price \n2. Display Total \n3. Display An Item & Price \n4. Remove Item \n5. Quit";
		cout << "\n\nEnter Choice: ";
		cin >> code;

		switch (code)
		{
			case 1:
				s1.getdata();
				break;

			case 2:
				s1.displaytotal();
				break;

			case 3:
				s1.displaydata();
				break;

			case 4:
				s1.removeitem();
				break;

		}
	} while (code <= 4);
}
