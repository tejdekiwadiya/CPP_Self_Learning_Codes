/*Tej Dekiwadiya
Create Date: 20/05/2022
Modify Date: ----------*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Created By: Tej Dekiwadiya" << endl;
    cout << "Created By: Tej Dekiwadiya" << endl
         << "Github: https://github.com/tejdekiwadiya" << endl
         << "LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << "Twitter: https://twitter.com/tejdekiwadiya" << endl
         << "Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    int row;
    cout << ">> Enter Number Of Row:     ";
    cin >> row;

    int col;
    cout << ">> Enter Number Of Columns: ";
    cin >> col;

    int matrix_1[row][col];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << ">> Enter Matrix 1: "
                 << "[" << i + 1 << "]"
                                    "["
                 << j + 1 << "] : ";
            cin >> matrix_1[i][j];
        }
    }

    int matrix_2[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << ">> Enter Matrix 2: "
                 << "[" << i + 1 << "]"
                                    "["
                 << j + 1 << "] : ";
            cin >> matrix_2[i][j];
        }
    }

    cout << "\n\t>> Addition Of Two Matrix: " << endl
         << endl;
    int matrix_addition[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrix_addition[i][j] = matrix_1[i][j] + matrix_2[i][j];
            cout << "\t    " << matrix_addition[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
