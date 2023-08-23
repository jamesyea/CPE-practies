#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int height[10003];
    memset(height,0,sizeof(height));
    int l,r,h;
    int mn=10001,mx=0;
    while(cin>>l>>h>>r){
        mn=min(mn,l);
        mx=max(mx,r);
        for(int i=l;i<r;i++){
            height[i]=max(height[i],h);
        }
    }

    for(int i=mn;i<=mx;i++){
        if(height[i]!=height[i-1]){
            if(i==mx) cout<<i<<" "<<height[i];
            else cout<<i<<" "<<height[i]<<" ";
        }
    }
    cout<<endl;
}