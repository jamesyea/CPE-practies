#include<iostream>
using namespace std;
int a[15]={0};
void solve(){
    for(int i=1;i<=14;i++){
        int m=i+1;
        while(true){
            int k=i*2;
            int kill=-1;
            while(k>i){
                kill+=m;
                kill%=k;
                if(kill<i) break;
                k--;
                kill--;
            }

            if(k<=i){
                a[i]=m;
                break;
            }

            m++;
        }
    }
}
int main(){
    solve();
    int n;
    while(cin>>n){
        if(n==0) break;
        cout<<a[n]<<endl;
    }
}