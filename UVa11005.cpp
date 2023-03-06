#include<iostream>
using namespace std;
int main(){
    int cost[36];//紀錄油墨成本
    int cheapest[36],cheapestcount;
    int x;
    cin>>x;
    for(int Case=1;Case<=x;Case++){
        cout<<"Case "<<Case<<":"<<endl;
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        int m,n,total;
        cin>>m;
        while(m--){
            cin>>n;
            int min=2147000000;
            cheapestcount=0;
            
            //計算base為2~36進制數印出數字的成本
            for(int base=2;base<=36;base++){
                total=0;
                int temp=n;
                while(temp>0){
                    total+=cost[temp%base];
                    temp/=base;
                }
                if(total<min){
                    min=total;
                    cheapest[0]=base;
                    cheapestcount=1;
                }
                else if(total==min){
                    cheapest[cheapestcount++]=base;
                }
            }
            cout<<"Cheapest base(s) for number "<<n<<":";
            for(int base=0;base<cheapestcount;base++){
                cout<<" "<<cheapest[base];
            }
            cout<<endl;
        }
        if(Case<x) cout<<endl;
    }
}