#include<iostream>
#include<cmath>
#include<set>
#include<climits>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    while(n--){
        set<ll> num;
        ll L,U;
        cin>>L>>U;
        int m=0;
        long long max_num=0;
        for(ll i=L;i<=U;i++){
            for(ll j=(ll)sqrt(i);j>0;j--){
                if(i%j==0){
                    num.insert(i/j);
                    num.insert(j);
                }
            }
            if(num.size()>m){
                m=num.size();
                max_num=i;
            }
            num.clear();
        }
        cout<<"Between "<<L<<" and "<<U<<", "<<max_num<<" has a maximum of "<<m<<" divisors."<<endl;
    }
}