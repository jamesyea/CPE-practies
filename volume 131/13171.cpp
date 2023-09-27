#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int magente,yellow,cyan;
        string s;
        cin>>magente>>yellow>>cyan>>s;
        bool check=true;
        for(int i=0;i<s.length() && check;i++){
            if(s[i]=='M'){
                magente--;
            } 
            else if(s[i]=='Y'){
                yellow--;
            }
            else if(s[i]=='C'){
                cyan--;
            }
            else if(s[i]=='R'){
                magente--;
                yellow--;
            }
            else if(s[i]=='G'){
                yellow--;
                cyan--;
            }
            else if(s[i]=='V'){
                magente--;
                cyan--;
            }
            else if(s[i]=='B'){
                magente--;
                cyan--;
                yellow--;
            }
            else if(s[i]=='W'){
                continue;
            }
            check= (magente>=0 && cyan>=0 && yellow>=0);
            
        }
        if(!check) cout<<"NO"<<endl;
        else{
            cout<<"YES "<<magente<<" "<<yellow<<" "<<cyan<<endl;
        }
    }
}