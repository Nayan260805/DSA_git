#include <bits/stdc++.h>
using namespace std;

void print1()
{
    int rows, coloum;
    cin >> rows >> coloum;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    print1();
    return 0;
}