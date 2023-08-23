#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        bool checkalpha=false;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) && !checkalpha){
                checkalpha=true;
                cnt++;
            }
            else if(!isalpha(s[i]) && checkalpha){
                checkalpha=false;
            }
        }
        cout<<cnt<<endl;
    }
}