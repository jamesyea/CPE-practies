#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int> price;
        long long total=0;
        int t;
        while(cin>>t){
            if(t==0) break;
            price.push_back(t);
        }
        sort(price.rbegin(),price.rend());
        bool check=true;
        for(int i=0;i<price.size();i++){
            long long mul=price[i];
            for(int j=1;j<i+1;j++){
                mul*=price[i];
            }
            total+=mul*2;
            if(total>5000000){
                check=false;
                break;
            }
        }
        if(check) cout<<total<<endl;
        else cout<<"Too expensive"<<endl;
    }
}