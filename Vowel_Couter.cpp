/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << ">> Created By: Tej Dekiwadiya" << endl
         << ">> Github: https://github.com/tejdekiwadiya" << endl
         << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
         << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;
    string line;

    cout << ">> Enter The Line From Which You Want To Count The Vowels: " << endl
         << ">> ";
    getline(cin, line);

    int vowel_counter;
    for (int i = 0; i < line.length(); i++)
    {
        if (line.at(i) == 'a' || line.at(i) == 'e' || line.at(i) == 'i' || line.at(i) == 'o' || line.at(i) == 'u' || line.at(i) == 'A' || line.at(i) == 'E' || line.at(i) == 'I' || line.at(i) == 'O' || line.at(i) == 'U')
        {
            vowel_counter++;
        }
    }
    cout << "\n>> Total Vowel Is: " << vowel_counter << endl;
}
