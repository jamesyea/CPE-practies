#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char keybroad[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string sen;
    while(getline(cin,sen)){
        for(int i=0;i<sen.length();i++){
            if(sen[i]==' ')
                cout<<" ";
            else{
                for(int j=0;j<strlen(keybroad);j++){
                    if(tolower(sen[i])==keybroad[j]){
                        cout<<keybroad[j-2];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
}