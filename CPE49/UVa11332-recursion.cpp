#include<iostream>
using namespace std;
//處理所有位數和
int g(int x){
    if(x<10)
        return x;
    return x%10+g(x/10);
}
//判斷位數和結果是否小於十
int f(int x){
    if(x<10)
        return x;
    return f(g(x));
}

int main(){
    int x;
    while(cin>>x){
        if(x==0) break;
        cout<<f(x)<<endl;
    }
}