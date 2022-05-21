/*Tej Dekiwadiya
Create Date:
Modify Date: ----------*/

#include <iostream>
using namespace std;

class matrix_class
{
private:
    int mat_row, mat_col;
    double matrix[100][100];

public:
    void getmatrix()
    {
        cout << ">> Enter Number Of Matrix Row: ";
        cin >> mat_row;

        cout << ">> Enter Number Of Matrix Column: ";
        cin >> mat_col;

        for (int i = 0; i < mat_row; i++)
        {
            for (int j = 0; j < mat_col; j++)
            {
                cout << ">> Enter Matrix Value For [" << i + 1 << "]"
                     << "[" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < mat_row; i++)
        {
            for (int j = 0; j < mat_col; j++)
            {
                cout << matrix[i][j];
                cout << "\t";
            }
            cout << endl;
        }
    }

    friend matrix_class trans(matrix_class);
};

matrix_class trans(matrix_class m1)
{
    matrix_class m2;
    m2.mat_col = m1.mat_row;
    m2.mat_row = m1.mat_col;
    for (int i = 0; i < m1.mat_row; i++)
    {
        for (int j = 0; j < m1.mat_col; j++)
        {
            m2.matrix[j][i] = m1.matrix[i][j];
        }
    }
    return (m2);
}

int main()
{
    cout << ">> Created By: Tej Dekiwadiya" << endl
         << ">> Github: https://github.com/tejdekiwadiya" << endl
         << ">> LinkedIN: https://www.linkedin.com/in/tejdekiwadiya" << endl
         << ">> Twitter: https://twitter.com/tejdekiwadiya" << endl
         << ">> Instagram: https://instagram.com/tejdekiwadia" << endl
         << endl;

    matrix_class m1, m2;
    m1.getmatrix();
    cout << "\n>> Before Transposed Matrix" << endl;
    m1.display();
    cout << "\n>> After Transposed Matrix" << endl;
    m2 = trans(m1);
    m2.display();
    return 0;
}
