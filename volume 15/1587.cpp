#include<iostream>
#include<map>
using namespace std;
int main(){
    int w,h;
    while(cin>>w>>h){
        map<int,int> mp;
        map<int,int> area;
        mp[w]++;
        mp[h]++;
        area[w*h]++;
        for(int i=0;i<5;i++){
            cin>>w>>h;
            mp[w]++;
            mp[h]++;
            area[w*h]++;
        }
        
        bool check=true;
        for(auto k:area){
            if(k.second % 2){
                check=false;
                break;
            }
        }
        if(check){
            for(auto k:mp){
                if(k.second % 4){
                    check=false;
                    break;
                }
            }
        }
        if(check) cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
}