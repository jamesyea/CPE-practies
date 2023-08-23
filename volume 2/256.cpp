#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
string tostr(int n,int x){
    string s="";
    s+=to_string(n);
    while(s.length()<x){
        s='0'+s;
    }
    return s;
}

int main(){
    int n;
    vector<string> res;
    while(cin>>n){
        res.clear();
        n/=2;
        int m=1;
        for(int i=0;i<n;i++)    
            m*=10;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if((i+j)*(i+j) == i*m+j){
                    res.push_back(tostr(i,n)+tostr(j,n));
                }
            }
        }

        for(auto &k : res) cout<<k<<endl;

    }
}