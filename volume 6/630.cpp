#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    
    while(t--){
        getchar();
        int n;
        vector<vector<int>> word(1000,vector<int>(26,0));
        vector<string> str(1000);
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            str[i]=s;
            for(int j=0;j<s.length();j++){
                word[i][s[j]-'a']++;
            }
        }
        while(cin>>s){
            if(s=="END") break;
            printf("Anagrams for: %s\n",s.c_str());
            int cs=1;
            int cnt=0;
            vector<int> input(26,0);
            for(int i=0;i<s.length();i++){
                input[s[i]-'a']++;
            }
            bool check;
            for(int i=0;i<n;i++){
                check=true;
                for(int j=0;j<26;j++){
                    if(input[j]!=word[i][j]){
                        check=false;
                        break;
                    }
                }
                if(check){
                    printf("  %d) %s\n",cs,str[i].c_str());
                    cs++;
                    cnt++;
                }
            }
            if(cnt==0){
                printf("No anagrams for: %s\n",s.c_str());
            }
        }
        if(t) cout<<endl;
        str.clear();
        word.clear();
    }
}