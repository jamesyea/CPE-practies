#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 4/1 is friday
    vector<string> day={"Monday","Tuesday","Wendnesday","Thursday","Friday","Saturday","Sunday",};
    vector<int> num_day={31,28,31,30,31,30,31,31,30,31,30,31};
    int x;
    cin>>x;
    int base_day=4;
    for(int i=0;i<3;i++){
        base_day+=num_day[i];
    }
    int base=7-((base_day-1)%7)-1;
    int m,d;
    while(x--){
        cin>>m>>d;
        int days=0;
        for(int i=0;i<m-1;i++){
            days+=num_day[i];
        }
        days+=d;

        int day_ind=(days+base)%7;
        cout<<day[day_ind]<<endl;
    }
}