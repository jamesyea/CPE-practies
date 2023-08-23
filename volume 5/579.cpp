#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string time;
    while(cin>>time){
        if(time=="0:00") break;
        int h=0,m=0;
        int i=0;
        while(time[i]!=':'){
            h*=10;
            h+=time[i]-'0';
            i++;
        }
        i++;
        for(i=i;i<time.length();i++){
            m*=10;
            m+=time[i]-'0';
        }
        double angle1,angle2,min_angle;
        angle1=30*h+m*0.5;
        angle2=m*6;
        min_angle=min(abs(angle1-angle2),360-(abs(angle1-angle2)));
        cout<<setprecision(3)<<fixed<<min_angle<<endl;
    }
}