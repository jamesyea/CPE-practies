#include<iostream>
using namespace std;
int main(){
    string s[101];
    int cnt=0;
    int maxlen=0;
    while(getline(cin,s[cnt])){
        int len=s[cnt].length();
        maxlen= maxlen>=len?maxlen:len;
        cnt++;
    }
    for(int i=0;i<maxlen;i++){
        for(int j=cnt-1;j>=0;j--){
            if(i<=s[j].length()-1)
                cout<<s[j][i];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
    

}