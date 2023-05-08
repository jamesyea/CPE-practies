#include<iostream>
using namespace std;
int main(){
    long long int x;
    while(cin>>x){
        if(x==0) break;
        string s="";
        int count=0;
        while(x!=0){
            if(x%2==1){
                s="1"+s;
                count++;
            }
            else{
                s="0"+s;
            }
            x/=2;
        }
        cout<<"The parity of "<<s<<" is "<<count<<" (mod 2)."<<endl;
    }
}