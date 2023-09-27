#include<iostream>
using namespace std;
typedef long long ll;
ll bigmod(ll B,ll P,ll M){
    if(P==0)
        return 1;
    else if(P==1)
        return B%M;
    else{
        ll res=bigmod(B,P/2,M);
        if(P%2)
            return res*res*B%M;
        else 
            return res*res%M;

    } 
}
int main(){
    ll b,p,m;
    while(cin>>b>>p>>m){
        cout<<bigmod(b,p,m)<<endl;
    }
}