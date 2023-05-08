#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        int cola,swit;
        cola=x;
        while(x>=3){
            swit=x/3;
            cola+=swit;
            x=(x%3)+swit;
        }
        if(x==2) cola++;
        cout<<cola<<endl;
    }
}