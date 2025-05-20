#include <bits/stdc++.h>
using namespace std;
int MaxCosecutive(vector<int> nums){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1}; // Sample input
    cout << "Maximum consecutive 1s: " << MaxCosecutive(nums) << endl;
    return 0;
}