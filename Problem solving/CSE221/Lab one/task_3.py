n = int(input())
# id = []
# mark = []
# print(n)
ID = input().split(" ")
mark = input().split(" ")

res = []

# for i in range(1,n):
#     j = i-1
#     x = id[i]
#     y = mark[i]
#     while(j>-1 and id[j]>x)

# for i in range(n):
#     res.append([int(ID[i]),int(mark[i])])

# for i in range(1,n):
#     j = i-1
#     x = res[i]

        
#     while(j>-1 and res[j][1] < x[1]):
#         res[j+1] = res[j]
#         j-=1;
#     res[j+1] = x
# print(res)


for i in range(1,n):
    j = i-1
    x = mark[i]
    y = ID[i]

        
    while(j>-1 and mark[j] < x):
        mark[j+1] = mark[j]
        ID[j+1] = ID[j]
        j-=1;
    mark[j+1] = x
    ID[j+1] = y
for i in range(1,n):
    j = i-1
    x = ID[i]
    y = mark[i]

        
    while(j>-1 and ID[j] < x):
        ID[j+1] = ID[j]
        mark[j+1] = mark[j]
        j-=1;
    ID[j+1] = x
    mark[j+1] = y


