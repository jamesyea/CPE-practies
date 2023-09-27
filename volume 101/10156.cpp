#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct turtle{
    int x,y;
};

int main(){
    int N,M,T,K;
    while(cin>>N>>M>>T>>K){
        vector<vector<bool>> pond(N,vector<bool>(M,false));
        map<int,turtle> pos;
        int id,x,y;
        for(int i=0;i<T;i++){
            cin>>id>>x>>y;
            pos[id].x=x;
            pos[id].y=y;
            pond[x][y]=true;
        }
        string move;
        for(int i=0;i<K;i++){
            cin>>id>>move;
            x=pos[id].x;
            y=pos[id].y;
            if(move=="N"){
                x--;
            }
            else if(move=="S"){
                x++;
            }
            else if(move=="E"){
                y++;
            }
            else if(move=="W"){
                y--;
            }
            else if(move=="NE"){
                x--;
                y++;
            }
            else if(move=="NW"){
                x++;
                y--;
            }
            else if(move=="SE"){
                x++;
                y++;
            }
            else if(move=="SW"){
                x++;
                y--;
            }
            if(x>=0 && x<N && y>=0 && y<M && !pond[x][y]){
                pond[pos[id].x][pos[id].y]=false;
                pond[x][y]=true;
                pos[id].x=x;
                pos[id].y=y;
            }
        }
        for(int i=0;i<N;i++){
            int j=M-1;
            while(j>=0 && !pond[i][j]){
                j--;
            }
            for(int k=0;k<=j;k++){
                if(pond[i][k]) cout<<'*';
                else cout<<' ';
            }
            cout<<endl;
        }
        cout<<endl;

    }
}
