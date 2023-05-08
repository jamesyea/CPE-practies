#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        int temp;
        int count=0;
        for(int i=a;i<=b;i++){
            temp=(int)sqrt(i);
            if(temp*temp==i) count++;
        }
        cout<<count<<endl;
    }
}