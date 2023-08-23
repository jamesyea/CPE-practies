#include<iostream>
#include<vector>
#include<cstdio>
#include<climits>
using namespace std;
/*
     0 -2 -7  0
     9  2 -6  2
    -4  1 -4  1
    -1  8  0 -2
*/
int main(){
    int n;
    int matrix[105][105];
    while(cin>>n){
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>matrix[i][j];
            }
        }
        int col_sum[105][105] = {0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                col_sum[i][j]=col_sum[i-1][j]+matrix[i][j];
            }
        }

        int msum=INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int sum=0;
                for(int k=1;k<=n;k++){
                    sum+=col_sum[j][k]-col_sum[i-1][k];
                    if(sum>msum) msum=sum;
                    if(sum<0) sum=0;
                }
            }
        }
        cout<<msum<<endl;
        
    }
}



