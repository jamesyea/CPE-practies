#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        n--;
        int off;
        int i;
        for( i=1;i<n;i++){
            off=0;
            for(int m=1;m<=n;m++){
                off=(off+i)%m;
            }
            if(off==11) break;
        }
        cout<<i<<endl;
    }
}