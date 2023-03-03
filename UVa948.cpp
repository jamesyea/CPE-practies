#include<iostream>
using namespace std;
int fib[40]={0,1};
void Fibonaccimal(){
    for(int i=2;i<40;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main(){
    int x,num;
    cin>>x;
    Fibonaccimal();
    while(x--){
        cin>>num;
        cout<<num<<" = ";
        bool flag=false;
        for(int i=39;i>=2;i--){
            if(num>=fib[i]){
                flag=true;
                num-=fib[i];
                cout<<"1";
            }
            else if(flag)
                cout<<"0";
        }
        cout<<" (fib)"<<endl;
    }
}