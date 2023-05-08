#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int pos[n];
        for(int i=0;i<n;i++){
            cin>>pos[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(pos[j]>pos[j+1]){
                    int temp=pos[j];
                    pos[j]=pos[j+1];
                    pos[j+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
}