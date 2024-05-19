#include<iostream>
#include<algorithm>
using namespace std;
struct map{
    int ascii;
    int cnt;
};
bool comp(map a,map b){
    if(a.cnt==b.cnt)
        return a.ascii>b.ascii;
    else
        return a.cnt<b.cnt;
}
int main(){
    string s;
    bool first=true;
    while(getline(cin,s)){
        if(first) first=false;
        else cout<<endl
        map ch[95]; //ascii 32~126
        for(int i=0;i<95;i++){
            ch[i].ascii=i+32;
            ch[i].cnt=0;
        }
        for(int i=0;i<s.length();i++){
            ch[s[i]-32].cnt++;
        }
        sort(ch,ch+95,comp);
        for(int i=0; i<95; i++){
            if(ch[i].cnt>0){
                cout<<ch[i].ascii<<" "<<ch[i].cnt<<endl;
            }
        }
        
    }
}
