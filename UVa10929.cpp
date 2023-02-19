#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string a;
    while (cin>>a){
        if(a=="0") break;
        int odd_sum=0,even_sum=0;
        for(int i=0;i<a.length();i++){
            if((i+1)%2==1){
                odd_sum+=(int)a[i]-'0';
            }
            else{
                even_sum+=(int)a[i]-'0';
            }
        }
        if((odd_sum-even_sum)%11==0){
            cout<<a<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<a<<" is not a multiple of 11."<<endl;
        }
    }
    
}