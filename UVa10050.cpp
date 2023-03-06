#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int sim_day,Case;
        cin>>sim_day;
        cin>>Case;
        int days[Case];
        for(int i=0;i<Case;i++){
            cin>>days[i];
        }
        int count=0;
        for(int i=1;i<=sim_day;i++){
            if(i%7==0 || i%7==6) continue;
            for(int j=0;j<Case;j++){
                if(i%days[j]==0){
                    count++;
                    break;
                }
            } 
        }
        cout<<count<<endl;
    }
}