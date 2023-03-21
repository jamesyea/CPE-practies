#include<iostream>
#include<vector>
using namespace std;
int cs=1;
int main(){
    int x;
    while (cin>>x){
        bool flag=true;
        bool check[20001];
        int b[100];
        for(int i=0;i<20001;i++)
            check[i]=false;
        for(int i=0;i<x;i++){
            cin>>b[i];
            if(b[i]<1) flag=false;
        }
        for(int i=0;i<x;i++){
            for(int j=i;j<x;j++){
                if(check[b[i]+b[j]] || b[j]<b[i])
                    flag=false;
                else
                    check[b[i]+b[j]]=true;
            }
        }
        if(flag)
            cout<<"Case #"<<cs<<": It is a B2-Sequence."<<endl;
        else
            cout<<"Case #"<<cs<<": It is not a B2-Sequence."<<endl;
        cout<<endl;
        cs++;
    }
    
}