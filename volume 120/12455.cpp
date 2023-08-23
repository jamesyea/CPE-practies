#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int want,n;
        cin>>want;
        cin>>n;
        int cnt=0;
        int bar[n];
        for(int i=0;i<n;i++){
            cin>>bar[i];
            cnt=(cnt<<1)|1;
        }
        bool check=false;
        for(int i=0;i<=cnt;i++){
            int total=0;
            int a=i;
            for(int j=0;j<n;j++){
                if(a&1) total+=bar[j];
                a=a>>1;
            }
            if(total==want){
                check=true;
                break;
            }
        }
        if(check) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}