#include<iostream>
#include<vector>
#include<cstring>
#include<cctype>
#define len 5000
using namespace std;
int main(){
    int x;
    cin>>x;
    
    char msg[len];
    char alp[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num[28]={};
    for(int k=0;k<x+1;k++){
        cin.getline(msg,len);
        for(int i=0;i<strlen(msg);i++){
            if(isalpha(msg[i]))
                num[toupper(msg[i])-'A']++;
        }
    }
    int temp;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if(num[j]<num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;

                temp=alp[j];
                alp[j]=alp[j+1];
                alp[j+1]=temp;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(num[i])
            cout<<alp[i]<<" "<<num[i]<<endl;
    }
    
}
