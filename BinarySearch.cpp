#include <bits/stdc++.h>
using namespace std;

int Binarsearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
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

int main(){
    int even[5]={2,5,6,8,9};
    int odd[5]={2,6,8,9,10};

    int evenIndex=Binarsearch(even,5,9);
    int oddIndex=Binarsearch(odd,5,9);

    cout<< "The Even index is " <<evenIndex <<endl;
    cout<< "The odd index is " <<oddIndex <<endl;
    

}