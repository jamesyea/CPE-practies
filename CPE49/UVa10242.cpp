#include<iostream>
#include<iomanip>
using namespace std;
//利用平行四邊形對角線特性a+c=b+d
int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4,x,y;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        x=x1+x2+x3+x4;
        y=y1+y2+y3+y4;
        if(x1==x3 && y1==y3 ||  x1==x4 && y1==y4){
            x-=x1*3;
            y-=y1*3;
        }
        else{
            x-=x2*3;
            y-=y2*3;
        }
        cout<<setprecision(3)<<fixed<<x<<" ";
        cout<<setprecision(3)<<fixed<<y<<endl;
    }
}