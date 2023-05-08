#include<iostream>
using namespace std;
int main(){
    int x,y;
    int s_x,s_y,rdir;
    char face;
    char dir[4]={'N','E','S','W'};
    char dir_pos[4][2]={{0,1},{1,0},{0,-1},{-1,0}};//四方位前進方向
    cin>>x>>y;
    int lost[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;i<y;i++){
            lost[x][y]=0;/*???*/
        }
    }
    while(cin>>s_x>>s_y>>face){
        string s;
        cin>>s;
        for(int i=0;i<4;i++){
            if(face==dir[i]){
                rdir=i;
                break;
            }
        }
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]=='L'){
                rdir=(rdir+3)%4;
            }
            else if(s[i]=='R'){
                rdir=(rdir+1)%4;
            }
            else if(s[i]=='F'){
                s_x=s_x+dir_pos[rdir][0];
                s_y=s_y+dir_pos[rdir][1];
                //掉出邊界
                if(s_x<0 || s_y<0 || s_x>x || s_y>y){
                    //如果有之前掉落機器人的紀錄
                    if(lost[s_x-dir_pos[rdir][0]][s_y-dir_pos[rdir][1]]==1){
                        s_x-=dir_pos[rdir][0];
                        s_y-=dir_pos[rdir][1];
                    }
                    else{
                        if(s_x>x) s_x=x;
                        else if(s_x<0) s_x=0;

                        if(s_y>y) s_y=y;
                        else if(s_y<0) s_y=0;

                        lost[s_x][s_y]=1;
                        break;
                    }
                }
            }
        }
        cout<<s_x<<" "<<s_y<<" "<<dir[rdir];
        if(i<s.length())
            cout<<" LOST";
        cout<<endl;
    }
}