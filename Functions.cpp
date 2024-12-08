#include <bits/stdc++.h>
using namespace std;
// VOID FUNCTION
// void printName(string name){
//     cout << "hey " << name;
// }
// int main(){
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }

// RETURN FUNCTION
//  int sumNumber(int num1, int num2)
//  {
//      int num3 = num1 + num2;
//      return num3;
//  }
//  int main()
//  {
//      int num1, num2;
//      cin >> num1 >> num2;
//      int res = sumNumber(num1, num2);
//      cout << res;
//      return 0;
//  }
// PARAMATRRISED
 int maxx(int num1,int num2){
     if(num1 >= num2){
        return num1;
     } 
     return num2;
 }
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = maxx(num1, num2);
    cout << minimum;
    return 0;
}