#include<iostream>
using namespace std;
int main(){
    long int a,b;
    while (cin>>a>>b){
        if(a==0 && b==0) break;
        int carry=0,temp=0;
        while(a>0 || b>0){
            if(a%10+b%10+temp>=10){
                temp=1;
                carry+=1;
            }
            else temp=0;
            a/=10;
            b/=10;
        }
        if(carry==0) cout<<"No carry operation.\n";
        else if(carry==1) cout<<carry<<" carry operation.\n";
        else cout<<carry<<" carry operations.\n";
    }
}