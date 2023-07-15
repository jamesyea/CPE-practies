#include<iostream>
using namespace std;
int main(){
    string s;
    int check=true;
    while (getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]=='"' && check==true){
                cout<<"``";
                check=false;
            }
            else if(s[i]=='"' && check==false){
                cout<<"''";
                check=true;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
}