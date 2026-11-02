#include <iostream>
using namespace std;
int main()
{
    const int n = 10;
    int a[n] = {8, 3, 8, -2, 5, -2, 7, 8, 1, 4};
    int min = a[0];
    int max = a[0];
    int minindex = 0;
    int maxindex = 0;
    int mincount = 1;
    int maxcount = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minindex = i;
            mincount = 1;
        }
        else if (a[i] == min)
        {
            mincount++;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxindex = i;
            maxcount = 1;
        }
        else if (a[i] == max)
        {
            maxcount++;
        }
    }
    cout << "min = " << min << endl;
    cout << "first min index = " << minindex << endl;
    cout << "first min namber = " << minindex + 1 << endl;
    cout << "min element count = " << mincount << endl;
    cout << "max = " << max << endl;
    cout << "first max index = " << maxindex << endl;
    cout << "first max namber = " << maxindex + 1 << endl;
    cout << "max element count = " << maxcount << endl;

    return 0;
}
