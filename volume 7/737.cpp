#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        int x,y,z,L;
        int x1,y1,z1;
        int x2,y2,z2;
        x1=y1=z1=0;
        x2=y2=z2=INT_MAX;
        while(n--){
            cin>>x>>y>>z>>L;
            x1=max(x1,x);
            x2=min(x2,x+L);
            y1=max(y1,y);
            y2=min(y2,y+L);
            z1=max(z1,z);
            z2=min(z2,z+L);
        }
        int res=max(0,x2-x1)*max(0,y2-y1)*max(0,z2-z1);
        cout<<res<<endl;
    }
}