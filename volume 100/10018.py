n=int(input())
while(n>0):
    n-=1
    s=str(input())
    cnt=0
    rev_s=s[::-1]
    while True:
        s=str(int(s)+int(rev_s))
        cnt+=1
        rev_s=s[::-1]
        if(rev_s==s): break
    print(cnt,end=" ")
    print(s)
