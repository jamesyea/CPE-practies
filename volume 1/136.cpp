#include<iostream>
using namespace std;
int main(){
    int number[1502];
    number[1]=1;
    number[2]=2;
    number[3]=3;
    number[4]=4;
    number[5]=5;
    int idx2=2,idx3=2,idx5=2;
    for(int i=6;i<=1500;i++){
        while(number[idx2]*2<=number[i-1]) idx2++;
        while(number[idx3]*3<=number[i-1]) idx3++;
        while(number[idx5]*5<=number[i-1]) idx5++;

        number[i]=min(number[idx2]*2,number[idx3]*3);
        number[i]=min(number[i],number[idx5]*5);
    }

    cout<<"The 1500'th ugly number is "<<number[1500]<<"."<<endl;
}