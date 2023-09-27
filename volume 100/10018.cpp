#include<iostream>
using namespace std;
long long reverse_number(long long n){
    long long k=0;
    while(n>0){
        k*=10;
        k+=n%10;
        n/=10;
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        long long s;
        cin>>s;
        long long rev_s;
        rev_s=reverse_number(s);
        int cnt=0;
        while(true){
            s+=rev_s;
            cnt++;
            rev_s=reverse_number(s);
            if(rev_s==s) break;
        }
        
        cout<<cnt<<" "<<s<<endl;
    }
}