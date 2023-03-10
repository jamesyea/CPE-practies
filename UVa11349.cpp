#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int cs=1;cs<=x;cs++){
        int s;
        char t1,t2;
        cin>>t1>>t2>>s;
        long long square[10000];
        for(int i=0;i<s*s;i++){
            cin>>square[i];
        }
        int i=0,j=s*s-1;
        while(i<=j){
            if(square[i]!=square[j]) break;
            if(square[i]<0 || square[j]<0) break;
            i++;
            j--;
        }
        if(i>j)
            cout<<"Test #"<<cs<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<cs<<": Non-symmetric."<<endl;
    } 
}