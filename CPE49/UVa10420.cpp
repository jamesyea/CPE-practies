#include<iostream>
#include<map>
using namespace std;
int main(){
    int x;
    cin>>x;
    map<string,int> count;
    map<string,int> ::iterator it;
    while(x--){
        string name;
        string country;
        cin>>country;
        count[country]++;
        getline(cin,name);
    }
    for(it=count.begin();it!=count.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}