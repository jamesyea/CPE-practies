//24
#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int *cnt = new int[n];
        int *num = new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>num[i];
            cnt[i]=0;
        }
        if(n==1)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            int j=0;
            for(j=0; j<n-1; j++)
            {
                int diff = abs(num[j+1]-num[j]);
                if(diff<=0 || diff>n-1)
                {
                    cout<<"Not jolly"<<endl;
                    break;
                }
                cnt[diff]+=1;
            }
            if(j>=n-1)
            {
                int k=0;
                for(k=1; k<n; k++)
                {
                    if(cnt[k]==0)
                    {
                        cout<<"Not jolly"<<endl;
                        break;
                    }
                }
                if(k>=n)
                    cout<<"Jolly"<<endl;

            }

        }

    }

}
