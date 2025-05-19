#include <iostream>
using namespace std;
long long int BinarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sqrt=mid*mid;
        if(sqrt==n){
            return mid;
        }
        if(sqrt<n){
            ans=mid;
            s=mid+1;
         }
        else{
             e=mid-1;
         }
        mid=s+(e-s)/2;
        }
        return ans;
        
    }

int mySqrt(int x) {
    return BinarySearch(x);

    }
int main(){
   int n=456;
   cout<<BinarySearch(n);
}