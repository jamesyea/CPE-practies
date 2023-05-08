#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int s,d;
        cin>>s>>d;
        if(s<d || (s+d)%2)
            cout<<"impossible"<<endl;
        else
            cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
    }
}