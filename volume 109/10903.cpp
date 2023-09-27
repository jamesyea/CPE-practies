#include<iostream>
#include<iomanip>
#include<cstring>
#define win 1
#define lose 0
using namespace std;


int main(){
    int n,k;
    bool first=true;
    int player[103][2];
    while(cin>>n){
        if(n==0) break;
        if(first) first=false;
        else cout<<endl;
        cin>>k;
        memset(player,0,sizeof(player));
        int p1,p2;
        string s1,s2;
        for(int i=0;i<k*n*(n-1)/2;i++){
            cin>>p1>>s1>>p2>>s2;
            if(s1[0]==s2[0]) continue;
            if( s1[0] == 'r' && s2[0] == 's' ||
                s1[0] == 's' && s2[0] == 'p' ||
                s1[0] == 'p' && s2[0] == 'r' ){
                    player[p1][win]++;
                    player[p2][lose]++;
                }
                else{
                    player[p1][lose]++;
                    player[p2][win]++;
                }
        }

        for(int i=1;i<=n;i++){
            if(player[i][win]+player[i][lose]==0){
                cout<<"-"<<endl;
            }
            else {
                cout<<setprecision(3)<<fixed<<(double)player[i][win]/(double)(player[i][win]+player[i][lose])<<endl;
            }
        }

    }
}