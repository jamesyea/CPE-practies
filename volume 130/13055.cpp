#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> v;
    int n;
    cin>>n;
    string s,w;
    while(n--){
        cin>>s;
        if(s=="Sleep"){
            cin>>w;
            v.push(w);
        }
        else if(s=="Test"){
            if(v.empty()){
                cout<<"Not in a dream"<<endl;
            }
            else cout<<v.top()<<endl;
        }
        else if(s=="Kick"){
            if(!v.empty()){
                v.pop();
            }
        }
    }
}