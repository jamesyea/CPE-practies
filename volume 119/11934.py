while True:
    arr=list(map(int,input().split()))
    if(arr[0]==0 and arr[1]==0 and arr[2]==0 and arr[3]==0 and arr[4]==0):
        break
    cnt=0
    for i in range(0,arr[4]+1):
        res=arr[0]*i*i+arr[1]*i+arr[2]
        if(res%arr[3]==0):
            cnt+=1
    print(cnt)