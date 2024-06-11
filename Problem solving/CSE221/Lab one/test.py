
# lst = [("ABC","03:00"),("ABC","03:00"),("ABC","17:30"),("ABC","03:00"),]

# # lst.sort(key=lambda x: x[1])
# lst.sort(key=lambda x: x[1], reverse=True)

# print(lst)

# print(lst)

# trains = [("ABC","17:30"),("ABC","03:00"),("ABC","03:00")]
# lst = []
# cc = 0
# c = 1
# for t in trains:
#     if(len(trains) == c-1):
#         break
#     if(t[0] == trains[cc][0]):
#         lst.append(t)
#         c+=1
#     else:
#         lst.sort(reverse = True)
#         for train_name, departure_time in trains:
#             print(f"{train_name} will departure at {departure_time}")
#         lst.clear()
#     cc+=1

with open("input.txt", "r") as f:
    N = int(f.readline())
    student_ids = list(map(int, f.readline().split()))
    marks = list(map(int, f.readline().split()))

students = sorted(zip(student_ids, marks), key=lambda x: (-x[1], x[0]))

with open("output.txt", "w") as f:
    for student_id, mark in students:
        f.write(f"ID: {student_id} Mark: {mark}\n")
