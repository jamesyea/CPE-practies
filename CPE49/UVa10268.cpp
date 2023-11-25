#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    while(cin>>x){
        string s;
        cin.ignore();
        getline(cin,s);//1 -1
        stringstream ss(s);
        long long t;
        vector<long long> num;
        while(ss>>t){
            num.push_back(t);
        }
        long long ans=0;
        num.pop_back();
        int n=num.size();
        for(int i=0;i<num.size();i++){
            ans*=x;
            ans+=num[i]*n;
            n--;
        }
        cout<<ans<<endl;
    }
}