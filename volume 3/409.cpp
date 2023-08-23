#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int K,E,cs=1;
    while(cin>>K>>E){
        string keyword[K];
        for(int i=0;i<K;i++){
            cin>>keyword[i];
        }
        cin.ignore();
        string s;
        string sen[E];
        int cnt[20];
        memset(cnt,0,sizeof(cnt));
        int m=0;
        for(int i=0;i<E;i++){
            getline(cin,s);
            sen[i]=s;
            string word="";
            int idx=0;
            while(idx<s.length()){
                char t=tolower(s[idx]);
                if('a'<=t && t<='z'){
                    word+=t;
                }
                else{
                    for(int j=0;j<K;j++){
                        if(word==keyword[j]){
                            cnt[i]++;
                            break;
                        }
                    }
                    word="";
                }
                idx++;
            }
            m=max(m,cnt[i]);
        }
        cout<<"Excuse Set #"<<cs++<<endl;
        for(int i=0;i<E;i++){
            if(cnt[i]==m){
                cout<<sen[i]<<endl;
            }
        }
        cout<<endl;
    }
}