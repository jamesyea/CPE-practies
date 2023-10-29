//24
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[n];
        bool check[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        memset(check,false,sizeof(check));
        if(n==1){
            cout<<"Jolly"<<endl;
        }else{
            int d;
            bool flag=true;
            for(int i=0;i<n-1;i++){
                d=abs(arr[i]-arr[i+1]);
                if(d==0 || d>=n || check[d]){
                    flag=false;
                    break;
                }
                check[d]=true;
            }
            if(flag)cout<<"Jolly"<<endl;
            else cout<<"Not jolly"<<endl;
            
        }
    }
}
