#include<bits/stdc++.h>
using namespace std;
//Pass by value and reference
void doSomething(string &s){
    s[0]='M';
    cout << s << endl;
    // cout << num << endl;
    // num +=5;
    // cout << num << endl;
    // num +=5;
    // cout << num << endl;
}
int main(){
    //int num=10;
    string s="Nayan";
    doSomething(s);
    cout << s << endl;
    return 0;
}

