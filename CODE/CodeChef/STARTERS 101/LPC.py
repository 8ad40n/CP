def MinMoves(s,k,x,y):
    min_moves_k=[[0]*10 for _ in range(10)]
    for i in range(10):
        for j in range(10):
            min_moves_k[i][j]= min(abs(i-j),10-abs(i-j))
            
    min_moves_s=float('inf')
    
    for i in range(x-y+1):
        moves=0
        for j in range(y):
            moves+=min_moves_k[int(s[i+j])][int(k[j])]
        
        min_moves_s= min(min_moves_s,moves)
    return min_moves_s
    
    
T = int(input())
for i in range (T):
    x,y =map(int,input().split())
    s=input()
    k=input()
    print (MinMoves(s,k,x,y))