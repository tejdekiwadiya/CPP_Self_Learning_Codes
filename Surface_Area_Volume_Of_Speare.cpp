/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;
#define PI 3.14159265359

void surface_area_sphere(double radius)
{
    double surface_area = 4 * PI * radius * radius;
    cout << "\n>> Surface Area Of Sphere: " << surface_area << endl;
};

void volume_sphere(double radius)
{
    double volume = (4 * PI * radius * radius * radius) / 3;
    cout << ">> Volume Of A Sphere: " << volume;
};

int main()
{
    cout << ">> Created By: Tej Dekiwadiya" << endl
         << ">> Github: https://github.com/tejdekiwadiya" << endl
         << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
         << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    double radius;

    cout << ">> Enter Radius: ";
    cin >> radius;
    cout << endl;

    volume_sphere(radius);
    surface_area_sphere(radius);
    return 0;
}
