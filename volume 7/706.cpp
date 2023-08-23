#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    int top[10]={1,0,1,1,0,1,1,1,1,1};
    int upleft[10]={1,0,0,0,1,1,1,0,1,1};
    int upright[10]={1,1,1,1,1,0,0,1,1,1};
    int mid[10]={0,0,1,1,1,1,1,0,1,1};
    int downleft[10]={1,0,1,0,0,0,1,0,1,0};
    int downright[10]={1,1,0,1,1,1,1,1,1,1};
    int low[10]{1,0,1,1,0,1,1,0,1,1};
    while(cin>>n>>s){
        if(n==0 && s=="0") break;
        for(int i=0;i<s.length();i++){
            cout<<" ";
            for(int j=0;j<n;j++){
                if(top[s[i]-'0'])
                    cout<<'-';
                else 
                    cout<<" ";
            }
            cout<<" ";
            if(i!=s.length()-1)
                cout<<" ";
        }

        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<s.length();j++){
                if(upleft[s[j]-'0'])
                    cout<<'|';
                else 
                    cout<<" ";
                for(int k=0;k<n;k++){
                    cout<<" ";
                }
                if(upright[s[j]-'0'])
                    cout<<'|';
                else
                    cout<<" ";
                if(j!=s.length()-1)
                    cout<<" ";
            }
            cout<<endl;
        }
        
        for(int i=0;i<s.length();i++){
            cout<<" ";
            for(int j=0;j<n;j++){
                if(mid[s[i]-'0'])
                    cout<<'-';
                else 
                    cout<<" ";
            }
            cout<<" ";
            if(i!=s.length()-1)
                cout<<" ";
        }
        cout<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<s.length();j++){
                if(downleft[s[j]-'0'])
                    cout<<'|';
                else 
                    cout<<" ";
                for(int k=0;k<n;k++){
                    cout<<" ";
                }
                if(downright[s[j]-'0'])
                    cout<<'|';
                else
                    cout<<" ";
                if(j!=s.length()-1)
                    cout<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<s.length();i++){
            cout<<" ";
            for(int j=0;j<n;j++){
                if(low[s[i]-'0'])
                    cout<<'-';
                else 
                    cout<<" ";
            }
            cout<<" ";
            if(i!=s.length()-1)
                cout<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}