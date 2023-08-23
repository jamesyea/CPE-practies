#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int k=1;
        while(k*(k+1)/2 < n){
            k++;
        }
        int m=k*(k+1)/2;
        int i=k,j=1;
        while(m>n){
            i--;
            j++;
            m--;
        }
        if(k%2){
            printf("TERM %d IS %d/%d\n",n,j,i);
        }
        else{
            printf("TERM %d IS %d/%d\n",n,i,j);
        }

    }
}