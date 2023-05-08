#include<iostream>
#include<cmath>
using namespace std;
int gcd(long long int x,long long int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
    int x;
    cin>>x;
    for(int c=1;c<=x;c++){
        string a,b;
        cin>>a>>b;
        long long int a_dec=0,b_dec=0;
        for(int i=0;i<a.length();i++){
            a_dec=a_dec*2+(a[i]-'0');
        }
        for(int i=0;i<b.length();i++){
            b_dec=b_dec*2+(b[i]-'0');
        }
        int love=gcd(a_dec,b_dec);
        if(love!=1)
            cout<<"Pair #"<<c<<": All you need is love!"<<endl;
        else
            cout<<"Pair #"<<c<<": Love is not all you need!"<<endl;
        
    }
}