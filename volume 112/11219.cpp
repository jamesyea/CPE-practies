#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
struct date{
    int day,month,year;
}a,b;

int main(){
    int n;
    scanf("%d",&n);
    for(int cs=1;cs<=n;cs++){
        scanf("%d/%d/%d",&a.day,&a.month,&a.year);
        scanf("%d/%d/%d",&b.day,&b.month,&b.year);
        a.month-=a.day<b.day;
        a.year-=a.month<b.month;

        printf("Case #%d: ",cs);
        if(a.year<b.year) printf("Invalid birth date\n");
        else if(a.year>b.year+130) printf("Check birth date\n");
        else printf("%d\n",a.year-b.year);   
    }

   
} 