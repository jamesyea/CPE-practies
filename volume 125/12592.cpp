#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    map<string,string> mp;
    while(n--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
    }
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        cout<<mp[s]<<endl;
    }
}