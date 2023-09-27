#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int cnt=0;
        int plus=1;
        bool check=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='X'){
                check=false;
                plus=1;
            }
            else if(s[i]=='O' && !check){
                check=true;
                cnt+=plus;
            }
            else if(s[i]=='O' && check){
                plus++;
                cnt+=plus;
            }
        }
        cout<<cnt<<endl;
    }
}