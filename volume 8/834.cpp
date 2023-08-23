#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    while(cin>>m>>n){
        vector<int> num;
        num.push_back(m/n);
        m%=n;
        while(m>0 && n>0){
            swap(m,n);
            num.push_back(m/n);
            m%=n;
        }
        int s=num.size();
        for(int i=0;i<s;i++){
            if(i==0)cout<<"["<<num[i]<<";";
            else if(i==s-1)cout<<num[i]<<"]"<<endl;
            else cout<<num[i]<<",";
        }
    }
}