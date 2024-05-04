#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        vector<int> cnt_a(26,0);
        vector<int> cnt_b(26,0);
        for(int i=0;i<a.length();i++){
            cnt_a[a[i]-'a']++;
        }
        for(int i=0;i<b.length();i++){
            cnt_b[b[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            int min_cnt=min(cnt_a[i],cnt_b[i]);
            for(int j=0;j<min_cnt;j++){
                cout<<(char)('a'+i);
            }
        }
        cout<<endl;

    }
}