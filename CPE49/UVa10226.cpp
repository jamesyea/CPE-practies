#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    getchar();
    while(n--){
        string tree;
        map<string,int> count;
        int total=0;
        while(getline(cin,tree)){
            if(tree=="") break;
            count[tree]++;
            total++;
        }
        map<string,int> ::iterator it;
        for(it=count.begin();it!=count.end();it++){
            cout<<it->first<<" ";
            cout<<setprecision(4)<<fixed<<(double)it->second/total*100<<endl;
        }
        if(n) puts("");
    }
}