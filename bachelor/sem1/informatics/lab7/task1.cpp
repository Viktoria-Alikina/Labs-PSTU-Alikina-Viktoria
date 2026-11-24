#include <iostream>
#include <complex>
using namespace std;
int sum(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}
complex<double> sum(int n, const complex<double> a[])
{
    complex<double> s =(0.0, 0.0);
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}
int main()
{
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    complex<double> y[] = {{1, 2}, {3, -1}, {0, 0}, {4.5, 0}, {-2, 1}};
    
    cout << "The sum of numbers of type int = " << sum(10, x) << endl;
    cout << "The sum of numbers of type complex = " << sum(5, y) << endl;
    
    return 0;
}
