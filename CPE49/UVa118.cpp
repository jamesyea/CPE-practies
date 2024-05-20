#include<iostream>
#include<vector>
using namespace std;
char dir[4]={'N','E','S','W'};
int dir_for[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int mx,my;
bool check_drop(int x,int y){
    if(x<0 || y<0 || x>mx || y>my) return true;
    return false;
}

int main(){
    cin>>mx>>my;
    vector<vector<bool>> drop(my+1,vector<bool>(mx+1,false));
    int nx,ny;
    char face;
    while(cin>>nx>>ny>>face){
        int ndir;
        for(int i=0;i<4;i++){
            if(dir[i]==face){
                ndir=i;
                break;
            }
        }
        string com;
        cin>>com;
        bool lost=false;
        for(int i=0;i<com.length();i++){
            if(com[i]=='R') ndir=(ndir+1)%4;
            else if(com[i]=='L') ndir=(ndir+3)%4;
            else if(com[i]=='F'){
                if(check_drop(nx+dir_for[ndir][1],ny+dir_for[ndir][0]) && !drop[ny][nx]){
                    lost=true;
                    drop[ny][nx]=true;
                    break;
                }else if(check_drop(nx+dir_for[ndir][1],ny+dir_for[ndir][0]) && drop[ny][nx]){
                    continue;
                }
                nx+=dir_for[ndir][1];
                ny+=dir_for[ndir][0];
            }
        }
        cout<<nx<<" "<<ny<<" "<<dir[ndir];
        if(lost) cout<<" LOST";
        cout<<endl;
    }
    
}