#include <iostream>
using namespace std;
void split(char row[])
{
    cout << "(";
    for (int i = 0; row[i + 1] != '\0'; ++i)
    {
        if (row[i] != '0')
        {
            cout << row[i];
        }
        else
        {
            cout << ", ";
        }
    }
    cout << ") ";
}
int main()
{
    char row1[100], row2[100], row3[100];
    cin >> row1;
    cin >> row2;
    cin >> row3;
    
    split(row1);
    split(row2);
    split(row3);

    return 0;
}
