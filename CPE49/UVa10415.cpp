#include<iostream>
#include<map>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    map<char,string> finger;
    finger[' ']="0000000000";
    finger['c']="0111001111";
    finger['d']="0111001110";
    finger['e']="0111001100";
    finger['f']="0111001000";
    finger['g']="0111000000";
    finger['a']="0110000000";
    finger['b']="0100000000";
    finger['C']="0010000000";
    finger['D']="1111001110";
    finger['E']="1111001100";
    finger['F']="1111001000";
    finger['G']="1111000000";
    finger['A']="1110000000";
    finger['B']="1100000000";
    
    int x;
    cin>>x;
    cin.ignore();
    while(x--){
        string s;
        getline(cin,s);
        char last=' ';
        vector<int> ans(10,0);
        for(int i=0;i<s.length();i++){
            for(int j=0;j<10;j++){
                if(finger[last][j]=='0' && finger[s[i]][j]=='1')
                    ans[j]++;
            }
            last=s[i];
        }
        for(int i=0;i<9;i++){
            cout<<ans[i]<<" ";
        }
        cout<<ans[9]<<endl;
    }
}