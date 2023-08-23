#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        getchar();
        string s1;
        getline(cin,s1);
        vector<int> p;
        int t;
        stringstream ss(s1);
        while(ss>>t){
            p.push_back(t);
        }
        ss.clear();
        vector<string> idx(p.size()+1);
        getline(cin,s1);
        ss.str(s1);
        string s2;
        for(int i=0;i<p.size();i++){
            ss>>idx[p[i]];
        }
        for(int i=1;i<idx.size();i++){
            cout<<idx[i]<<endl;
        }
        if(n) cout<<endl;
    }

}