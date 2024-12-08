#include <bits/stdc++.h>
using namespace std;
void countDigit()
{
    int n;
    cin >> n;
    int count = (int)(log10(n) + 1);
    cout << count;
    return;
}

int main()
{
    countDigit();
    return 0;
    //time complexity-log10(n)
}
