#include<iostream>
using namespace std;
int main(){
    long long int S,D,count;
    while (cin>>S>>D){
        D-=S;
        while(D>0){
            S++;
            D-=S;
        }
        cout<<S<<endl;   
    }
}
