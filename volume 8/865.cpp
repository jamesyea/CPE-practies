#include<iostream>
#include<cctype>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    getchar();
    while(n--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        map<char,char> mp;
        for(int i=0;i<s1.length();i++){
            mp[s1[i]]=s2[i];
        }
        cout<<s2<<endl;
        cout<<s1<<endl;
        string s;
        while(getline(cin,s)){
            if(s=="") break;
            for(int i=0;i<s.length();i++){
                if(mp.count(s[i])) cout<<mp[s[i]];
                else cout<<s[i];
            }
            cout<<endl;
            
        }
        if(n) cout<<endl;
    }
}