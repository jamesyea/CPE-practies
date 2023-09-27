#include<iostream>
using namespace std;
int main(){
    string s;
    string w="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                cout<<s[i];
                continue;
            }
            for(int j=0;j<w.length();j++){
                if(s[i]==w[j]){
                    cout<<w[j-1];
                    break;
                }
            }
        }
        cout<<endl;
    }
}