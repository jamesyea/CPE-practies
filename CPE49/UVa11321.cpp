#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
bool comp(int a,int b){
    if(a%m==b%m){//若取餘數相同
        if((a%2)*(b%2))
            return a>b;//較大的奇數排前面
        else if(a%2==0 && b%2==0)
            return a<b;//較小的偶數排前
        else
            return a%2;//若a、b為一奇一偶,奇數排前
    }
    else
        return a%m<b%m;
}
int main(){
    while(cin>>n>>m){
        if(n==0 && m==0){ 
            cout<<"0 0"<<endl;
            break;
        }
        cout<<n<<" "<<m<<endl;
        int num[n];
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n,comp);
        for(int i=0;i<n;i++)
            cout<<num[i]<<endl;
    }
}