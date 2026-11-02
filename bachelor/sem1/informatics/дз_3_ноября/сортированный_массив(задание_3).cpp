#include <iostream>
using namespace std;
int main()
{
    const int n = 10;
    int a[n] = {1, 3, 4, 8, 9, 12, 15, 18, 0, 44};
    int i = 0;
    bool f = false;
    while (i < n-1 && f == false)
    {
        if (a[i] >= a[i+1])
        {
            f = true;
        }
        else
        {
            i++;
        }
    }
    if (f == false)
    {
        cout << "the array is sorted in ascending order" << endl;
    }
    else
    {
        cout << "the array isn't sorted in ascending order" << endl;
    }
}