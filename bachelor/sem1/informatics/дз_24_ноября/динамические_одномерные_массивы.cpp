#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the size if the array";
    cin >> n;
    int* arr = new int[n];
    cout << "enter the array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n <= 0 || m <= 0)
    {
        delete[] arr;
        return 1;
    }
    int* temp = new int[m];
    for (int i = 0; i < min(n, m); i++)
    {
        temp[i] = arr[i];
    }
    for (int i = n; i < m; i++)
    {
        temp[i] = 0;
    }
    delete[] arr;
    arr = temp;

    cout << "the new array: ";
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}