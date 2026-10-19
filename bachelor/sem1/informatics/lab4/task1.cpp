#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int max_n = 100;
    int a[max_n];
    int n;
    cout << "Введите реальную длину массива";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 - 50;
    }

    cout << "Исходный массив: ";
    for  (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int k;
    cout << "Введите номер элемента для удаления";
    cin >> k;

    for (int i = k - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;

    cout << "Массив после удаления элемента";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 ==0)
        {
            for (int j = n; j > i + 1; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = 0;
            n  = n + 1;
        }
    }
    cout << "Итоговый массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
