#include<iostream>
using namespace std;
int f(int x){
    if(x<10) return x;
    return f(x/10)+x%10;
}
int main(){
    string s;
    while(cin>>s){
        if(s=="0") break;
        int num=0;
        for(int i=0;i<s.length();i++){
            num+=((int)s[i]-'0');
        }
        int count=1;
        while(num>10){
            num=f(num);
            count++;
        }
        if(num==9)
            cout<<s<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
        else
            cout<<s<<" is not a multiple of 9."<<endl;
    }
}