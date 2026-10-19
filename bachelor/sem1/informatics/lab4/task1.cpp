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
    
    return 0;
}
