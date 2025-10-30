#include <iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,24};
    int size=6;

    int Smallest=INT16_MAX;
    int Largest=INT16_MIN;
    for(int i=0;i<size;i++){// min , max
        // if (nums[i]< Smallest){
        //     Smallest=nums[i];
        // }
        Smallest=min(Smallest,nums[i]);
        Largest=max(Largest,nums[i]);

    }
    cout<<"Smallest number is: "<<Smallest<<endl;
    cout<<"Largest number is: "<<Largest<<endl;

    return 0;
}