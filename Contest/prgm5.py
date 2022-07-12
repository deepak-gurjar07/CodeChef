# '''Chef has an 8×8 chessboard. He placed a knight on the square (X_1, Y_1). Note that, the square at the intersection of the i^{th} row and j^{th} column is denoted by (i, j)(i,j).

# Chef wants to determine whether the knight can end up at the square (X_2, Y_2) in exactly 100 moves or not.

# For reference, a knight can move to a square which is:

# One square horizontally and two squares vertically away from the current square, or
# One square vertically and two squares horizontally away from the current square
# '''
t=1
t = int (input())
import math
modd= int(1e9+7)

for tc in range(t):

    x1,y1,x2,y2=list(map(int,input().split()))
    p1=(x1+y1)&1
    p2=(x2+y2)&1
    if(p1==p2):
        print("YES")
    else:
        print("NO")
