#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        string s;
        getline(cin,s);
        getline(cin,s);
        int n=0,a;
        stringstream s1(s);
        while(s1>>a) n++;
        n--;
        stringstream s2(s);
        long long val=0;
        while(s2>>a){
            if(n==0) break;
            val*=x;
            val+=n--*a;
        }
        cout<<val<<endl;
    }
}