#include <iostream>
using namespace std;
int LinearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 6, 7, 8, 3, 2, 1};
    int sz = 7;
    int target = 8;
    cout << LinearSearch(arr, sz, target) << endl;
    return 0;
}