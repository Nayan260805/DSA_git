#include<bits/stdc++.h>
using namespace std;

int getPivotElement(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[5]={8,10,2,17,3};
    cout<< "Pivot is " << getPivotElement(arr,5) <<endl;
}