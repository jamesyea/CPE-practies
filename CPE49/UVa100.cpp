#include<iostream>
using namespace std;
int cycle_lenth(int x){
    int count=1;
    while (x!=1){
        if(x%2==0) x/=2;
        else x=(3*x)+1;
        count++;
    }
    return count;
    
}
int main(){
    int a,b;
    while(cin>>a>>b){
        int max=0;
        cout<<a<<" "<<b<<" ";
        if(a>b){
            int t;
            t=a;
            a=b;
            b=t;
        }
        for(int i=a;i<=b;i++){
            int temp=cycle_lenth(i);
            if(temp>max) max=temp;
        }
        cout<<max<<endl;
    }
    
}