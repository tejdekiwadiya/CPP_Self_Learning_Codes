/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;
int main()
{
    cout << ">> Created By: Tej Dekiwadiya" << endl
         << ">> Github: https://github.com/tejdekiwadiya" << endl
         << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
         << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;
    double value, *prt = &value;
    cout << ">> Enter Value: ";
    cin >> value;
    cout << ">> " << prt << " is Address Of Value: " << *prt << endl;
    return 0;
}
