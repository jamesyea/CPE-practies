#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> num(n);
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num.begin(),num.end());
        int min,max;
        if(n%2==0){ 
            min=num[n/2-1];
            max=num[n/2];
        }
        else min=max=num[n/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(min<=num[i] && num[i]<=max)
                count++;
        }
        int possible=max-min+1;
        cout<<min<<" "<<count<<" "<<possible<<endl;
        
    }
}