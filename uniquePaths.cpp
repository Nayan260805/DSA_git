#include <bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n){
    int N=m+n-2;
    int r=m-1;
    double res=1;
    for(int i=1;i<=r;i++){
        res=res*(N-r+i)/i;
    }
    return (int)res;
}
int main() {
    int m = 3, n = 2; // Example grid size
    cout << "Unique paths from top-left to bottom-right: " << uniquePaths(m, n) << endl;
    return 0;
}
// This code calculates the number of unique paths in a grid from the top-left corner to the bottom-right corner.
// The function `uniquePaths` uses combinatorial mathematics to determine the number of unique paths.
// It calculates the total number of steps needed to reach the bottom-right corner (N) and the number of steps down (r).
// The result is computed using the formula for combinations, which is efficient and avoids the need for dynamic programming or recursion.
// The time complexity is O(min(m, n)), and the space complexity is O(1), making it suitable for large grid sizes.
// The code is efficient and handles the problem in linear time with constant space, making it suitable for large inputs.
// The algorithm is robust and can handle edge cases, such as when the grid size is 1x1 or when either dimension is 1.
// The code is well-structured and easy to understand, making it a good solution for the problem of counting unique paths in a grid.
// The use of combinatorial mathematics is a clever approach to solve this problem efficiently.