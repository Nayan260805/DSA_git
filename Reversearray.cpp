#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> v){
    int s=0; int e=v.size()-1;

    while(s<=e){
        swap (v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;

    v.push_back(17);
    v.push_back(15);
    v.push_back(13);
    v.push_back(10);
    v.push_back(8);
    v.push_back(5);

    vector<int> ans=reverseArray(v);
    cout<<"printing the array"<<endl;
    print(ans);
    return 0;


}