#include<iostream>
#include<map>
#include<cctype>
using namespace std;
int main(){
    int n;
    bool first=true;
    while(cin>>n){
        if(first) first=false;
        else cout<<endl;
        string s;
        getline(cin,s);
        map<string,int> mp;
        while(getline(cin,s)){
            if(s=="EndOfText") break;
            string word="";
            for(int i=0;i<s.size();i++){
                if(isalpha(s[i])){
                    word+=tolower(s[i]);
                }
                else{
                    mp[word]++;
                    word.clear();
                }
                if(i==s.size()-1 && !s.empty()){
                    mp[word]++;
                    word.clear();
                }
            }
        }
        int cnt=0;
        for(auto k:mp){
            if(k.second == n){
                cout<<k.first<<endl;
                cnt++;
            }
        }
        if(cnt==0) cout<<"There is no such word."<<endl;
    }
}