#include <bits/stdc++.h>
using namespace std;
void print2(int n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
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