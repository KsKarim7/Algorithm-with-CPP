def bubbleSort(arr):                                                    
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            train1 = arr[j][0]
            train2 = arr[j + 1][0]
            length1 = len(train1)
            length2 = len(train2)
            range_length = max(length1, length2)
            idx1 = 0
            idx2 = 0
            if train1 == train2:
                time1 = arr[j][-1]
                time2 = arr[j + 1][-1]
                for k in range(len(time1)): 
                    if time1[k] > time2[k]:
                        break
                    if time1[k] < time2[k]:
                        arr[j], arr[j+1] = arr[j+1], arr[j]
                        break
            else:
                for k in range(range_length): 
                    if idx1 == length1 or idx2 == length2:
                        if length1 > length2:
                            arr[j], arr[j+1] = arr[j+1], arr[j]
                        break
                    if train1[idx1] < train2[idx2]:
                        break
                    if train1[idx1] > train2[idx2]:
                        arr[j], arr[j+1] = arr[j+1], arr[j]
                        break
                    idx1 += 1
                    idx2 += 1
                
    return arr

def train_schedule():
    with open("input4.txt", "r") as f1:
        input_no = int(f1.readline().strip())
        arr = [0] * input_no
        idx = 0
        for line in f1:
            arr[idx] = line.strip().split()
            idx += 1
        with open("output4.txt", "w") as f2:
            for item in bubbleSort(arr):
                f2.write(" ".join(item))
                f2.write("\n")
            
train_schedule()