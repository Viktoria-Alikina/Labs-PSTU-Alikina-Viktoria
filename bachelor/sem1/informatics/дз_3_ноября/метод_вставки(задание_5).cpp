#include <iostream>
using namespace std;
int main()
{
    const int n = 7;
    int a[n] = {8, 3, 6, 1, 7, 2, 5};
    
    for (int i = 1; i < n; i++)
    {
        int y = a[i];
        int j = i - 1;
        bool f = false;

        while (j >= 0 && f == false)
        {
            if (a[j] > y)
            {
                a[j + 1] = a[j];
                j--;
            }
            else
            {
                f = true;
            }
        }
        a[j + 1] = y;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}