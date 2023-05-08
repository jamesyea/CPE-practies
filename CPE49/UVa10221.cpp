#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double s,a;
    string angle;
    while(cin>>s>>a>>angle){
        if(angle=="min") a/=60;
        if(a>180) a=360-a;
        double ang=a*M_PI/180.0;
        double chord=2*(s+6440)*sin(ang/2);
        double arc=ang*(s+6440);
        cout<<setprecision(6)<<fixed<<arc<<" ";
        cout<<setprecision(6)<<fixed<<chord<<endl;
    }
}