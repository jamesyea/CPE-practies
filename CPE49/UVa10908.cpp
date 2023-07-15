#include<iostream>
using namespace std;
char map[100][100];
int height,width;
bool is_square(int x,int y,int radius){
    //檢查以map[x][y]為中心,半徑為radius正方形
    int top,bottom,left,right;
    char ch=map[x][y];
    top=x-radius;
    bottom=x+radius;
    right=y+radius;
    left=y-radius;
    //上下左右超出地圖範圍，回傳false
    if(top<0 || bottom>=height || left<0 || right>=width) return false;
    for(int i=top;i<=bottom;i++){
        for(int j=left;j<=right;j++){
            if(map[i][j]!=ch) return false;
        }
    }
    return true;
}

int main(){
    int x;
    cin>>x;
    while (x--){
        int Q;
        cin>>height>>width>>Q;
        for(int i=0;i<height;i++){
            for(int j=0;j<width;j++)
                cin>>map[i][j];
        }
        cout<<height<<" "<<width<<" "<<Q<<endl;
        int r,c;
        while(Q--){
            cin>>r>>c;
            int radius=0;
            while(is_square(r,c,radius)){
                radius++;
            }
            cout<<radius*2-1<<endl;
        }
    }
    
}