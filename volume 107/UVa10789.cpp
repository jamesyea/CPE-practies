#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
vector<bool> prime(2001,true);
void soe(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<2001;i++){
        if(prime[i]){
            for(int j=i*i;j<2001;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    int x;
    soe();
    cin>>x;
    int cs=1;
    while(x--){
        string s;
        cin>>s;
        vector<int> cnt('z'+1,0);
        for(auto k:s){
            cnt[k]++;
        }
        set<int> ans;
        for(int i=0;i<'z'+1;i++){
            if(prime[cnt[i]])
                ans.insert(i);
        }
        cout<<"Case "<<cs<<": ";
        cs++;
        if(ans.empty()) cout<<"empty";
        else{
            for(auto k:ans){
                cout<<(char)k;
            }
        }
        cout<<endl;
    }      
}
