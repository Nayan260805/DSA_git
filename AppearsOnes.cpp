#include <bits/stdc++.h>
using namespace std;
int AppearsOnes(int n, vector<int> arr){
    int num;
    for(int i=0;i<n;i++){
        num=arr[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                cnt++;
            }
        }
        if(cnt==1){
            return num;
        }

    }
    return -1;
}

int main() {
    vector<int> arr = {4, 3, 2, 4, 2, 5, 3}; 
    int n = arr.size();
    int result = AppearsOnes(n, arr);
    if(result != -1)
        cout << "The element that appears only once is: " << result << endl;
    else
        cout << "No element appears exactly once." << endl;
    return 0;
}