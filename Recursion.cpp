#include <bits/stdc++.h>
using namespace std;
#include<iostream>
void printName(int i, int n)
{
    if (i > n)
        return;
    cout << i << " " << endl;

    printName(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    printName(1, n);
}