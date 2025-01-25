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

int Binarsearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int SearchRotatedArray(int arr[],int n,int k) {
     int pivot=getPivotElement(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return Binarsearch(arr,pivot,n-1,k);
    }
    else{
        return Binarsearch(arr,0,pivot-1,k);
    }
}
int main(){
   
    int arr[5]={8,10,2,17,3};
    cout<< "Rotated array " << SearchRotatedArray(arr,5,2) <<endl;
}