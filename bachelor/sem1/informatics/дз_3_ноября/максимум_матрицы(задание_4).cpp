#include <iostream>
using namespace std;
int main()
{
    const int rows = 3;
    const int cols = 4;
    int a[rows][cols] = {
        {2, -5, 7, 1},
        {4, 3, -2, 6},
        {-10, 8, 5, -1}
    };
    int max = a[0][0];
    int maxrow = 0;
    int maxcol = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxrow = i;
                maxcol = j;
            }
        }
    }
    cout << "max = " << max << endl;
    cout << "index row  = " << maxrow << endl;
    cout << "index col = " << maxcol << endl;
    cout << "row number = " << maxrow + 1 << endl;
    cout << "col number = " << maxcol + 1 << endl;

    return 0;
}