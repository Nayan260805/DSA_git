#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int n, int num, vector<int> arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, num;
    cin >> n;  // Input size of array

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input array elements
    }

    cin >> num; // Input the number to search for

    int result = LinearSearch(n, num, arr);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}