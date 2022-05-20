/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;
struct inch_feet
{
    double inch;
    double feet;
};

int main()
{
    cout << "Created By: Tej Dekiwadiya" << endl
         << "Github: https://github.com/tejdekiwadiya" << endl
         << "LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << "Twitter: https://twitter.com/tejdekiwadiya" << endl
         << "Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    inch_feet v1, v2;
    cout << ">> Enter Inch Of 1st Var.: ";
    cin >> v1.inch;
    cout << ">> Enter Feet Of 1st Var.: ";
    cin >> v1.feet;

    cout << ">> Enter Inch Of 2nd Var.: ";
    cin >> v2.inch;
    cout << ">> Enter Feet Of 2nd Var.: ";
    cin >> v2.feet;

    cout << "\n-----------------------";

    double addition_inch;
    addition_inch = v1.inch + v2.inch;
    cout << "\n>> Addition Of Inch: " << addition_inch << endl;

    double addition_feet;
    addition_feet = v1.feet + v2.feet;
    cout << ">>Addition Of Feet: " << addition_feet << endl;

    cout << "-----------------------";

    while (addition_inch >= 12)
    {
        addition_inch = addition_inch - 12;
        addition_feet++;
    }

    cout << "\n\n-----------------------";
    cout << "\n>> Converted In Proper Inch-Feet System" << endl;
    cout << ">> Feet: " << addition_feet << " >> Inch: " << addition_inch << endl;
    cout << "-----------------------";
    return 0;
}
