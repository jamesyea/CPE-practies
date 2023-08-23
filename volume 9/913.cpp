#include<iostream>
using namespace std;
int main(){
    long long n;
    while(cin>>n){
        long long last=1;
        long long num=6;
        while(n>1){
            last+=num;
            num+=4;
            n-=2;
        }
        cout<<last+(last-2)+(last-4)<<endl;
    }
}