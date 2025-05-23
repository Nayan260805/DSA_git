#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums,int target){
    map<int,int>mpp;
    for (int i=0;i<nums.size();i++){
        int num=nums[i];
        int moreFind=target-num;
        if(mpp.find(moreFind)!=mpp.end()){
            return{mpp[moreFind],i};
        }
        mpp[num]=i;

    }
    return{-1,-1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}