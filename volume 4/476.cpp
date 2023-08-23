#include<iostream>
#include<cstdio>
using namespace std;
struct coordinate{
    double x1,y1,x2,y2;
}a[12];

int main(){
    int nR=1;
    char r;
    while(cin>>r){
        if(r=='*') break;
        cin>>a[nR].x1>>a[nR].y1>>a[nR].x2>>a[nR].y2;
        nR++;
    }

    double px,py;
    int p=1;
    while(cin>>px>>py){
        if(px==9999.9 && py==9999.9) break;
        int i=0;
        int cnt=0;
        for(i=1;i<nR;i++){
            if(a[i].x1<px && px<a[i].x2 && a[i].y2<py && py<a[i].y1){
                printf("Point %d is contained in figure %d\n",p,i);
                cnt++;
            }
        }
        if (cnt==0){
            printf("Point %d is not contained in any figure\n",p);
        }
        p++;
    }

}