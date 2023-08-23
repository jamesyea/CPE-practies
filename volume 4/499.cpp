#include<iostream>
#include<map>
#include<cctype>
using namespace std;
int main(){
    string s;
    map<char,int> cnt;
    while(getline(cin,s)){
        int m=0;
        cnt.clear();
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]))
                cnt[s[i]]++;
            m=max(m,cnt[s[i]]);
        }
        map<char,int>::iterator it;
        for(it=cnt.begin();it!=cnt.end();it++){
            if(it->second == m)
                cout<<it->first;
        }
        cout<<" "<<m<<endl;
    }
}