#include<iostream>
#include<vector>
using namespace std;
#define limit 1000000
vector<bool> prime(limit+1,true);
//sieve of Eratosthenes 質數篩
void soe(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=limit;++i){
        if(prime[i]){
            for(int j=i*i;j<=limit;j+=i)
                prime[j]=false;
        }
    }
}
int reverse_num(int a){
    int b=0;
    while(a>0){
        b*=10;
        b+=a%10;
        a/=10;
    }
    return b;
}
int main(){
    int x;
    soe();
    while(cin>>x){
        int rev_x;
        rev_x=reverse_num(x);
        if(!prime[x]){
            cout<<x<<" is not prime."<<endl;
            continue;
        }
        if(rev_x!=x && prime[rev_x])
            cout<<x<<" is emirp."<<endl;
        else
            cout<<x<<" is prime."<<endl;
    }   

}