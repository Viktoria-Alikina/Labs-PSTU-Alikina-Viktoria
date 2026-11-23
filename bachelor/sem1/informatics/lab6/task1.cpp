#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    gets(s);

    int len = strlen(s);
    bool f = false;

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            f = true;
        }
    }

    if (f == false)
    {
        cout << "the row is palindrom" << endl;
    }
    else
    {
        cout << "the row is not palindrom" << endl;
    }

    return 0;
}
