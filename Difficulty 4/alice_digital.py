ds = int(input())
max_subarray = -1
for i in range(ds):
    elements,m = tuple([int(x) for x in input().split()])
    max_subarray = 0
    data = [int(x) for x in input().split()]
    indices = [c for c,x in enumerate(data) if x == m]
    for j in indices:
        sub = [m]
        diff = 1
        while(j-diff>=0 and data[j-diff]> m):
            sub.append(data[j-diff])
            diff+=1
        diff=1
        while(j+diff<len(data) and data[j+diff]> m):
            sub.append(data[j+diff])
            diff+=1
        if(sum(sub)>= max_subarray):
            max_subarray = sum(sub)
    print(max_subarray)
