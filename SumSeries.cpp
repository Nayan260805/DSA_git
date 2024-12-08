#include<bits/stdc++.h>
//using Recursion
using namespace std;

void sumSeries(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumSeries(i-1,sum+i);
}
int main(){
    int n;
    cin>> n;
    sumSeries(n,0);
}