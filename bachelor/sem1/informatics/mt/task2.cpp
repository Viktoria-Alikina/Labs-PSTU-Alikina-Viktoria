#include <iostream>
using namespace std;
int main()
{
    char tape[100];
    int n;
    cout << "enter the number of characters" << endl;
    cin >> n;
    cout << "enter characters" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> tape[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (tape[i] != '+')
        {
            tape[j] = tape[i];
            j++;
        }
    }
    cout << "result: ";
    for (int i = 0; i < j; i++)
    {
        cout << tape[i];
    }
    return 0;
}