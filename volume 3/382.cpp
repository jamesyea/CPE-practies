#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n){
        if(n==0) break;
        if(n==1){
            cout<<setw(5)<<right<<fixed<<n<<"  "<<"DEFICIENT"<<endl;
            continue;
        }
        int sum=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                sum+=i;
                sum+=n/i;
            }
        }
        if(sum==n){
            cout<<setw(5)<<right<<fixed<<n<<"  "<<"PERFECT"<<endl;
        }
        else if(sum<n){
            cout<<setw(5)<<right<<fixed<<n<<"  "<<"DEFICIENT"<<endl;
        }
        else if(sum>n){
            cout<<setw(5)<<right<<fixed<<n<<"  "<<"ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
}