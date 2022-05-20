/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    cout << "Created By: Tej Dekiwadiya" << endl
         << "Github: https://github.com/tejdekiwadiya" << endl
         << "LinkedIN: https://linkedin.com/tejdekiwadiya" << endl
         << "Twitter: https://twitter.com/tejdekiwadiya" << endl
         << "Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    string line;

    cout << ">> Enter The Line Which You Want To Process The Casesen.: " << endl
         << ">> ";
    getline(cin, line);

    for (int i = 0; i < line.length(); i++)
    {
        if (line.at(i) >= 'a' && line.at(i) <= 'z')
        {
            line[i] = line[i] - 32;
        }
        else if (line.at(i) >= 'A' && line.at(i) <= 'Z')
        {
            line[i] = line[i] + 32;
        }
        else
        {
            line[i];
        }
    }
    cout << "\n>> Process Successfully Completed Output Was: " << endl
         << ">> " << line << endl;
}
