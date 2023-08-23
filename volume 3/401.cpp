#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<char,char> mp;
bool isPalin(string s){
    int size=s.length();
    bool check=true;
    for(int i=0;i<size/2;i++){
        if(s[i]!=s[size-1-i]){
            check=false;
        }
    }
    return check;
}

bool isMirror(string s){
    int size=s.length();
    bool check=true;
    for(int i=0;i<=size/2;i++){
        if(mp[s[i]]!=s[size-1-i]){
            check=false;
            break;
        }
    }
    return check;
}

int main(){
    string s;
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]=s2[i];
    }
    while(cin>>s){
        bool checkpalin=isPalin(s);
        bool checkmirror=isMirror(s);
        cout<<s;
        if(checkpalin && checkmirror) cout<<" -- is a mirrored palindrome.\n";
        else if(checkpalin && !checkmirror) cout<<" -- is a regular palindrome.\n";
        else if(!checkpalin && checkmirror) cout<<" -- is a mirrored string.\n";
        else cout<<" -- is not a palindrome.\n";

        cout<<endl;
    }
}
