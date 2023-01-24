T=int(input())
for n in range(T):
    N=int(input())
    matrix=[list(map(int,input().split())) for i in range(N)]
    k=0
    r=0
    c=0
    for i in range(N):
        k += matrix[i][i]
    for i in range(N-1):
        for j in range(N-1):
            if matrix[i][j]==matrix[i+1][j]:
                c +=1
                continue
            else:
                pass
    for i in range(N-1):
        for j in range(N-1):
            if matrix[i][j]==matrix[i][j+1]:
                r +=1
                break
            else:
                continue
        continue
    print("Case #{}: {} {} {}".format(n+1, k, r, c))
