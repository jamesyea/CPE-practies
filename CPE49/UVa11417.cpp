#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
    int x;
    while(cin>>x){
        if(x==0) break;
        int G=0;
        for(int i=1;i<x;i++){
            for(int j=i+1;j<=x;j++)
                G+=gcd(i,j);
        }
        cout<<G<<endl;
    }
}