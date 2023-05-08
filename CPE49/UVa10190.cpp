#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        bool check=true;
        vector<int> num;
        if(a<b || a<2 || b<2){
            cout<<"Boring!"<<endl;
            continue;
        }
        num.push_back(a);
        while(a>1){
            if(a%b!=0){
                check=false;
                break;
            }
            a/=b;
            num.push_back(a);
        }
        if(check){
            for(int i=0;i<num.size();i++){
                if(i==num.size()-1) cout<<num[i]<<endl;
                else cout<<num[i]<<" ";
            }
        }
        else cout<<"Boring!"<<endl;
    }
}