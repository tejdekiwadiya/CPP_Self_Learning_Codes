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
        cout << ">> Enter Value-1: ";
        cin >> value1;
    }
    friend void display(class1, class2);
    friend void swap(class1, class2);
};
class class2
{
private:
    double value2;

public:
    void getdata()
    {
        cout << ">> Enter Value-2: ";
        cin >> value2;
    }
    friend void display(class1, class2);
    friend void swap(class1, class2);
};

void display(class1 ob1, class2 ob2)
{
    cout << "\n>> Before Swapping Values: " << endl;
    cout << ">> Value-1: " << ob1.value1;
    cout << "\t>> Value-2: " << ob2.value2 << endl;
}

void swap(class1 ob1, class2 ob2)
{
    double temp = ob1.value1;
    ob1.value1 = ob2.value2;
    ob2.value2 = temp;

    cout << "\n>> After Swapping Values: " << endl;
    cout << ">> Value-1: " << ob1.value1;
    cout << "\t>> Value-2: " << ob2.value2 << endl;
}

int main()
{
    cout << "Created By: Tej Dekiwadiya" << endl
         << "Github: https://github.com/tejdekiwadiya" << endl
         << "LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << "Twitter: https://twitter.com/tejdekiwadiya" << endl
         << "Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;
    class1 ob1;
    class2 ob2;
    ob1.getdata();
    ob2.getdata();
    display(ob1, ob2);
    swap(ob1, ob2);
}
