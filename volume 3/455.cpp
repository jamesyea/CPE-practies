#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        cin.ignore();
        getchar();
        string s;
        cin>>s;
        string period,sub;
        bool check;
        int i;
        for(i=1;i<=s.length();i++){
            period=s.substr(0,i);
            check=true;
            for(int j=0;j<s.length();j+=i){
                sub=s.substr(j,i);
                if(period!=sub){
                    check=false;
                    break;
                } 
            }
            if(check) break;
        }
        cout<<i<<endl;
        if(n>0) cout<<endl;
    }
}