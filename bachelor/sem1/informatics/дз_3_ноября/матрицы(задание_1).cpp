#include <iostream>
#include <iomanip>
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
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << a[i][j];
            sum += a[i][j];
        }
        cout << " summa = " << sum << endl;
    }
    return 0;
}