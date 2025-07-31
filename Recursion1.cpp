#include<iostream>
using namespace std;
int Factorial (int n){
    // Base case: if n is 0, return 1 (0! = 1)
    // Recursive case: n! = n * (n-1)!
    // This function calculates the factorial of a number n using recursion.
    if(n==0){
        return 1;
    }
    return n * Factorial(n-1);
}

int main(){
    int n;
    cin>> n;
    int ans = Factorial(n);
    cout << ans << endl;
    return 0;
}