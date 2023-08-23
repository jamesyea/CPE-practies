#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    int cs=1;
    while(cin>>n){
        if(n==0) break;
        int box[n];
        int total=0;
        for(int i=0;i<n;i++){
            cin>>box[i];
            total+=box[i];
        }
        int avg=total/n;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(box[i]>avg) 
                cnt+=box[i]-avg;
        }
        printf("Set #%d\n",cs);
        cs++;
        printf("The minimum number of moves is %d.\n\n",cnt);
        
    }
}