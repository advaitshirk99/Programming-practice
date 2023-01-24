import numpy as np
T=int(input())
for k in range(T):
    R, C=[int(s) for s in input().split(" ")]
    mat = np.array([list(map(int,input().split())) for i in range(R)])
    block_list=[]
    blocks=0
    for i in range(R):
        for j in range(C):
            max_index=[]
            max_xy = np.where(mat==mat.max())
            max_index=list(zip(max_xy[0], max_xy[1]))
            for k in range(len(max_index)):
                dy=max_index[k][0]
                dx=max_index[k][1]
                try:
                    if mat[dy][dx-1] in mat:
                        diff=abs(mat[dy][dx]-mat[dy][dx-1])
                        if diff>1:
                            blocks = (diff-1)
                            mat[dy][dx-1] = mat[dy][dx-1]+blocks
                            block_list.append(blocks)
                except:
                    pass
                try:
                    if mat[dy+1][dx] in mat:
                        diff=abs(mat[dy][dx]-mat[dy+1][dx])
                        if diff>1:
                            blocks = (diff-1)
                            mat[dy+1][dx] = mat[dy+1][dx]+blocks
                            block_list.append(blocks)
                except:
                    pass
                try:
                    if mat[dy][dx+1] in mat:
                        diff=abs(mat[dy][dx]-mat[dy][dx+1])
                        if diff>1:
                            blocks = (diff-1)
                            mat[dy][dx+1] = mat[dy][dx+1]+blocks
                            block_list.append(blocks)
                except:
                    pass
                try:
                    if mat[dy-1][dx] in mat:
                        diff=abs(mat[dy][dx]-mat[dy-1][dx])
                        if diff>1:
                            blocks = (diff-1)
                            mat[dy-1][dx] = mat[dy-1][dx]+blocks
                            block_list.append(blocks)
                except:
                    pass
                mat[dy][dx]=0
    blocksum=sum(block_list)
    print("Case #{}: {}".format(k+1, blocksum))
    

