#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int cs=1;cs<=x;cs++){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++){
            if(i&1) sum+=i; 
        }
        cout<<"Case "<<cs<<": "<<sum<<endl;
    }
}