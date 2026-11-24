#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the matrix size";
    cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    cout << "enter matrix elements: ";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                a[i][j] = 0;
            }
        }
    }

    cout << "result matrix: "<< endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    
    return 0;
}