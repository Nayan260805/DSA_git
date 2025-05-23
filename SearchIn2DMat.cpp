#include <bits/stdc++.h>
using namespace std;
bool SearchIn2DMat(vector<vector<int>> &mat, int target)
{
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = n * m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (mat[row][col] == target)
        {
            return true;
        }
        else if (mat[row][col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}};
    int target = 16;

    if (SearchIn2DMat(matrix, target))
    {
        cout << "Target found in the matrix." << endl;
    }
    else
    {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}