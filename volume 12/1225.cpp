#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int> cnt(10,0);
        string s="";
        for(int i=1;i<=k;i++){
            s.append(to_string(i));
        }
        for(int i=0;i<s.length();i++){
            cnt[s[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            if(i==9) cout<<cnt[i]<<endl;
            else cout<<cnt[i]<<" ";
        }
    }
}