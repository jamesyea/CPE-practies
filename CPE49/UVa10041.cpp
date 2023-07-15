#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cin>>x;
    while (x--){
        int a;
        cin>>a;
        vector<int> pos(a);
        for(int i=0;i<a;i++){
            cin>>pos[i];
        }
        sort(pos.begin(),pos.end());
        int dis=0;
        for(int j=0;j<a;j++){
            dis+=abs(pos[j]-pos[a/2]);
        }
        cout<<dis<<endl;
    }
    
}