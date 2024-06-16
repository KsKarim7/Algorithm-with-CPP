def bubbleSort(arr):                                                    
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1): 
            if arr[j][1] < arr[j+1][1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
            if arr[j][1] == arr[j+1][1]:
                if arr[j][0] > arr[j+1][0]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]
            
    
    return arr


def ranking():
    with open ("output3.txt", "w") as f2:
        f2.write("")
    with open("input3.txt", "r") as f1:
        num_inputs = 0
        id_arr = None
        mark_arr = None
        id_no = False
        mark = False
        idx = 0
        for line in f1:
            if len(line.strip()) == 1:
                num_inputs = int(line.strip())
                id_arr = [0] * num_inputs
                mark_arr = [0] * num_inputs
                continue
            if id_no == False:
                for item in line.strip().split():
                    id_arr[idx] = int(item)
                    idx += 1
                idx = 0
                id_no = True
                continue
            if mark == False:
                for item in line.strip().split():
                    mark_arr[idx] = int(item)
                    idx += 1
                idx = 0
                mark = True
                id_mark_arr = [item for item in zip(id_arr, mark_arr)]
                with open ("output3.txt", "a") as f2:
                    for iden, markk in bubbleSort(id_mark_arr):
                        f2.write(f"ID: {iden} Mark: {markk}\n")
                    f2.write("\n")
                id_no = False
                mark = False
                