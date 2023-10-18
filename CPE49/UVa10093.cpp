#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int sum=0;
        int mx=1;
        int t;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                t=s[i]-'0';
            }else if(isupper(s[i])){
                t=s[i]-'A'+10;
            }else if(islower(s[i])){
                t=s[i]-'a'+36;
            }else continue;
            if(t>mx) mx=t;
            sum+=t;
        }
        int i;
        for(i=mx;i<62;i++){
            if(sum%i==0){
                cout<<i+1<<endl;
                break;
            }
        }
        if(i==62) cout<<"such number is impossible!"<<endl;

    }
}