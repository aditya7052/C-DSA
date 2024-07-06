arr=[[1,2,3],[4,5,6],[7,8,9]]
for i in range(3):
    for j in range(2,-1,-1):
        print(arr[j][i], end=" ")
    print()


# 1 2 3   7 4 1
# 4 5 6   8 5 2
# 7 8 9   9 6 3