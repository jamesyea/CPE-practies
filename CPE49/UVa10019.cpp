#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int b1=0,b2=0;
        int dec;
        cin>>dec;
        int hex=dec;
        while(dec!=0){
            b1+=dec%2;
            dec/=2;
        }
        while(hex!=0){
            int temp=hex%10;
            while(temp!=0){
                b2+=temp%2;
                temp/=2;
            }
            hex/=10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
}