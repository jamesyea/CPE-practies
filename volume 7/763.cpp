#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s1,s2;
    bool first=true;
    while(cin>>s1>>s2){
        if(s1.length()<s2.length())
            swap(s1,s2);
        int fib[110];
        memset(fib,0,sizeof(fib));
        for(int i=s2.length();i<s1.length();i++){
            s2='0'+s2;
        }
        int len=s1.length();
        for(int i=0;i<len;i++){
            fib[i]+=s1[len-i-1]-'0';
            fib[i]+=s2[len-i-1]-'0';
        }
        int idx;
        while(true){
            idx=0;
            if(fib[idx]>1 && idx==0){
                fib[idx]-=2;
                fib[idx+1]++;
                if(len==1) len++;
            }
            idx++;
            if(fib[idx]>1 && idx==1){
                fib[idx]-=2;
                fib[idx-1]++;
                fib[idx+1]++;
                if(len==2) len++;
            }
            idx=2;
            for(int i=idx;i<len+3;i++){
                if(fib[i]>1){
                    fib[i]-=2;
                    fib[i-2]++;
                    fib[i+1]++;
                    if(i==len-1) len++;
                }
                else if(fib[i-1] && fib[i-2]){
                    fib[i-1]--;
                    fib[i-2]--;
                    fib[i]++;
                    if(i==len) len++;
                }
            }
            bool check=true;
            for(int i=0;i<len;i++){
                if(fib[i]>1) check=false;
                if(fib[i] && fib[i+1]) check=false;
            }
            if(check) break;
        }
        if(first) first=false;
        else cout<<endl;
        for(int i=len-1;i>=0;i--){
            cout<<fib[i];
        }
        cout<<endl;
    }
}