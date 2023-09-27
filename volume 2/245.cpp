#include<iostream>
#include<vector>
#include<set>
#include<cctype>
using namespace std;
set<string> cnt;
vector<string> list;
string word="";
int num=0;
void printword(){
    if(word!=""){
        if(!cnt.count(word)){
            cnt.insert(word);
            list.insert(list.begin(),word);
        }
        cout<<word;
        word="";
    }
    else if(num){
        cout<<list[num-1];
        string temp=list[num-1];
        for(int i=num-1;i>0;i--){
            list[i]=list[i-1];
        }
        list[0]=temp;
        num=0;
    
    }
}
int main(){
    string s;    
    while(getline(cin,s)){
        if(s=="0") break;
        if(s=="\n"){
            cout<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                word+=s[i];
            }
            else if(isdigit(s[i])){
                num*=10;
                num+=s[i]-'0';
            }
            else{
                if(num || word!="") printword();
                cout<<s[i];
            }
        }
        if(num || word!="") printword();
        cout<<endl;
    }
}
