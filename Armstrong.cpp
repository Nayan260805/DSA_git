#include <bits/stdc++.h>
using namespace std;

void armstrong()
{
    int n;
    cin >> n;
    int sum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == dup)
        cout << "true";
    else
        cout << "false";
}
int main()
{
    armstrong();
    return 0;
}