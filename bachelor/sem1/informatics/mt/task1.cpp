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
    for (int i = 0; i < n; i++)
    {
        if (tape[i] == '0')
        {
            tape[i] = '1';
        }
        else if (tape[i] == '1')
        {
            tape[i] = '0';
        }
    }
    cout << "result: ";
    for (int i = 0; i < n; i++)
    {
        cout << tape[i];
    }
    return 0;
}