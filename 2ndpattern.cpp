#include <bits/stdc++.h>
using namespace std;
void print2(int n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    print2(n);
    return 0;
}