#include<iostream>
using namespace std;
int location(int x,int y){
    return ((x+y)*(x+y+1)/2)+x;
}
int main(){
    int x1,y1,x2,y2;
    int n;
    cin>>n;
    for(int cs=1;cs<=n;cs++){
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<cs<<": "<<location(x2,y2)-location(x1,y1)<<endl;
    }
}