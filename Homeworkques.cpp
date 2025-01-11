#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is the lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is upper case" << endl;
    }
    else
    {
        "This is numeric";
    }
}