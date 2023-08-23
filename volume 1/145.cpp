#include<iostream>
#include<vector>
#include<map>
#include<cstdio>
using namespace std;
int main(){
    map<char,vector<double>> cost;
    cost['A']={0.02,0.1,0.06,0.02,0.1,0.06,0.02};
    cost['B']={0.05,0.25,0.15,0.05,0.25,0.15,0.05};
    cost['C']={0.13,0.53,0.33,0.13,0.53,0.33,0.13};
    cost['D']={0.17,0.87,0.47,0.17,0.87,0.47,0.17};
    cost['E']={0.3,1.44,0.8,0.3,1.44,0.8,0.3};
    int time[]={480,1080,1320,1920,2520,2760,2880};
    char step;
    while(cin>>step){
        if(step=='#') break;
        string phone;
        int h1,m1,h2,m2;
        cin>>phone>>h1>>m1>>h2>>m2;
        double total=0;
        int day=0,even=0,night=0;
        m1+=h1*60;
        m2+=h2*60;
        vector<int> t(7);
        if(m2<m1) m2+=24*60;
        for(int i=0;i<7;i++){
            if(m1<=time[i]){
                if(m2<=time[i]){
                    t[i]=m2-m1;
                    total+=cost[step][i]*t[i];
                    break;
                }
                else{
                    t[i]=time[i]-m1;
                    total+=cost[step][i]*t[i];
                    m1=time[i];
                }
            }
        }
        day+=t[1]+t[4];
        even+=t[2]+t[5];
        night+=t[0]+t[3]+t[6];
        printf("%10s%6d%6d%6d%3c%8.2f\n",phone.c_str(),day,even,night,step,total);

    }
}