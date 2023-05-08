#include<iostream>
#include<map>
using namespace std;
int main(){
    int rs,cs,t=0;
    while(cin>>rs>>cs){
        if(rs==0 && rs==0) break;
        map<int,map<int,char>> a;
        for(int i=0;i<rs;i++){
            for(int j=0;j<cs;j++){
                cin>>a[i][j];
            }
        }
        if(t>0)cout<<endl;
        t++;
        cout<<"Field #"<<t<<":"<<endl;
        for(int r=0;r<rs;r++){
            for(int c=0;c<cs;c++){
                if(a[r][c]=='*'){ 
                    cout<<'*';
                    continue;
                }
                #define A(R,C) (a[R][C]=='*')
                int ans=A(r-1,c-1)+A(r-1,c)+A(r-1,c+1)
                        +A(r,c-1)+A(r,c)+A(r,c+1)
                        +A(r+1,c-1)+A(r+1,c)+A(r+1,c+1);
                cout<<ans;
            }
            cout<<endl;
        }
    }
}