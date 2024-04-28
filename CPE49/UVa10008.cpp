#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Count{
    char c;
    int n;
};
bool cmp(Count a,Count b){
    if(a.n==b.n) return a.c < b.c;
    return a.n > b.n;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<Count> a(26);
    for(int i=0;i<26;i++){
        a[i].c='A'+i;
        a[i].n=0;
    }
    while(n--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(islower(s[i]) || isupper(s[i])){
                a[toupper(s[i])-'A'].n++;
            }
        }
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<26;i++){
        if(a[i].n){
            cout<<a[i].c<<" "<<a[i].n<<endl;
        }
    }
}