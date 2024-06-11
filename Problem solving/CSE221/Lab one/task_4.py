N = int(input())

trains = []
for _ in range(N):
    line = input()
    parts = line.split()
    train_name = ' '.join(parts[0:1])
    # departure_time = parts[-2] + ':' + parts[-1]
    departure_time = parts[-1]
    trains.append((train_name, departure_time))

# trains.sort(key=lambda x: (x[0], x[1]))
trains.sort(key=lambda x: (x[0], x[1][0::]))

lst = []
c = 1
for t in trains:
    if(len(trains) == c-1):
        break
    if(t[0] == trains[c][0]):
        lst.append(t)
        c+=1
    else:
        lst.sort(reverse = True)
        for train_name, departure_time in trains:
            print(f"{train_name} will departure at {departure_time}")
        lst.clear()




# for train_name, departure_time in trains:
#     print(f"{train_name} will departure at {departure_time}")