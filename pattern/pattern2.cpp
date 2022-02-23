#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of rows and columns\n";
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else if (j == 1 || col == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}