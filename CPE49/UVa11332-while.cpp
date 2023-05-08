#include<iostream>
using namespace std;
int f(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    if(sum<10)
        return sum;
    return f(sum);
}

int main(){
    int x;
    while(cin>>x){
        if(x==0) break;
        cout<<f(x)<<endl;
    }
}