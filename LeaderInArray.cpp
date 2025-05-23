#include <bits/stdc++.h>
using namespace std;

vector<int> leaderInArray(vector<int> &a)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = leaderInArray(arr);

    cout << "Leaders in array: ";
    for (int num : leaders)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}