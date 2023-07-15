#include<iostream>
using namespace std;
int main(){
    string s;
    int cnt=0;
    while (getline(cin,s)){
        for(int i=0;s.length();i++){
            if(s[i]=='\"'){
                if(cnt%2==0) cout<<"``";
                else cout<<"''";
                cnt++;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
}