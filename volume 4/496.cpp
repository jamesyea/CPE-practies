#include<iostream>
#include<sstream>
#include<set>
using namespace std;
int main(){
    string s1;
    while(getline(cin,s1)){
        set<int> a;
        a.clear();
        stringstream ss(s1);
        int t;
        while(ss>>t){
            a.insert(t);
        }
        getline(cin,s1);
        ss.clear();
        set<int> b;
        ss.str(s1);
        while(ss>>t){
            b.insert(t);
        }
        set<int> sub;
        for(auto k:a){
            if(b.count(k)){
                sub.insert(k);
                b.erase(k);
            }
        }
        for(auto k:sub){
            a.erase(k);
        }

        if(a.empty() && b.empty()){
            cout<<"A equals B"<<endl;
        }
        else if(!a.empty() && b.empty()){
            cout<<"B is a proper subset of A"<<endl;
        }
        else if(a.empty() && !b.empty()){
            cout<<"A is a proper subset of B"<<endl;
        }
        else{
            if(sub.empty()){
                cout<<"A and B are disjoint"<<endl;
            }
            else{
                cout<<"I'm confused!"<<endl;
            }
        }

    }
}