#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
void bangla(long long int x){
    if(x>=10000000){
        bangla(x/10000000);
        cout<<" kuti";
        x%=10000000;
    }
    if(x>=100000){
        printf(" %lld lakh",x/100000);
        x%=100000;
    }
    if(x>=1000){
        printf(" %lld hajar",x/1000);
        x%=1000;
    }
    if(x>=100){
        printf(" %lld shata",x/100);
        x%=100;
    }
    if(x){
        printf(" %lld",x);
    }
}
int main(){
    int count=1;
    long long int num;
    while(cin>>num){
        cout<<setw(4)<<count<<".";
        if(num)
            bangla(num);
        else{
            cout<<" 0";
        }
        cout<<endl;
        count++;
    }
} 