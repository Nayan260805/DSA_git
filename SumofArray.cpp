#include <bits/stdc++.h>
using namespace std;

int SumodArray(int num[], int n)
{
    int SumodArray = 0;
    for (int i = 0; i < n; i++)
    {
        SumodArray += num[i];
    }
    return SumodArray;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "the sum of the array is: " << SumodArray(num, size) << endl;
}