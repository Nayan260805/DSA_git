#include <bits/stdc++.h>
using namespace std;
int findDuplicateNum(vector<int> &nums){
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]]; 
    }
    while(slow!=fast);
    fast=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;       
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};  // Duplicate is 2
    cout << "Duplicate number is: " << findDuplicateNum(nums) << endl;
    return 0;
}
// This code finds the duplicate number in an array using Floyd's Tortoise and Hare algorithm.
// It uses two pointers to detect a cycle in the array, which is possible because the array contains a duplicate.
// The slow pointer moves one step at a time, while the fast pointer moves two steps at a time.
// Once a cycle is detected, the fast pointer is reset to the start of the array, and both pointers move one step at a time until they meet again, which will be the duplicate number.
// The time complexity is O(n) and the space complexity is O(1).
// This approach is efficient and works well for the problem of finding a duplicate number in an array where the numbers are in the range from 1 to n (where n is the size of the array minus one).
// The algorithm is based on the fact that the array can be treated as a linked list where each index points to the next index, and the duplicate number creates a cycle in this linked list.
// The code is efficient and handles the problem in linear time with constant space, making it suitable for large inputs.
// The algorithm is robust and can handle edge cases, such as when the duplicate number is at the beginning or end of the array.
// The code is well-structured and easy to understand, making it a good solution for the problem of finding a duplicate number in an array.
// The use of Floyd's Tortoise and Hare algorithm is a clever approach to solve this problem efficiently.
// The code is also flexible and can be easily modified to handle different input formats or additional constraints if needed.
// The implementation is straightforward, and the logic is clear, making it easy to follow and maintain.
// The code is a good example of how to apply cycle detection algorithms in practical problems, showcasing the power of algorithmic thinking in solving real-world challenges efficiently.

