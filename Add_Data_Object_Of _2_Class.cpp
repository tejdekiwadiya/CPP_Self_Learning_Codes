/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;

class class2;
class class1
{
private:
    double value1;

public:
    void getdata()
    {
        cout << ">> Enter Class- 1 Object Value: ";
        cin >> value1;
    }
    friend void add_value(class1, class2);
};

class class2
{
private:
    double value2;

public:
    void getdata()
    {
        cout << ">> Enter Class- 2 Object Value: ";
        cin >> value2;
    }
    friend void add_value(class1, class2);
};

void add_value(class1 ob1, class2 ob2)
{
    cout << "=================================" << endl;
    cout << ">> Addition= " << ob1.value1 + ob2.value2 << endl;
    cout << "=================================" << endl;
}
int main()
{
    cout << ">> Created By: Tej Dekiwadiya" << endl
         << ">> Github: https://github.com/tejdekiwadiya" << endl
         << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
         << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    class1 ob1;
    class2 ob2;
    ob1.getdata();
    ob2.getdata();
    add_value(ob1, ob2);
    return 0;
}
