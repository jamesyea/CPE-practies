#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int N,i,x;
    double p,q;
    cin>>x;
    while(x--){
        cin>>N>>p>>i;
        q=1-p;
        double prob=(pow(q,i-1)*p)/(1-pow(q,N));
        if(p==0) cout<<"0.0000"<<endl;
        else cout<<setprecision(4)<<fixed<<prob<<endl;
    }
}