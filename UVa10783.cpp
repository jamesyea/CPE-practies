#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++){
            if(i&1) sum+=i; 
        }
        cout<<sum<<endl;
    }
}