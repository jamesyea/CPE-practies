#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        if(x==0) break;
        int top=1,down=6,s=5,n=2,w=3,e=4;
        while(x--){
            string rotate;
            cin>>rotate;
            int temp;
            if(rotate=="north")
                {temp=top;top=s;s=down;down=n;n=temp;}
            else if(rotate=="south")
                {temp=top;top=n;n=down;down=s;s=temp;}
            else if(rotate=="east")
                {temp=top;top=w;w=down;down=e;e=temp;}
            else if(rotate=="west")
                {temp=top;top=e;e=down;down=w;w=temp;}
        }
        cout<<top<<endl;
    }
}