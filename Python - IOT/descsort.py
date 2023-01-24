my_list = [-2, 4, 7, -3, -9, 0, 1]

for i in range(len(my_list)):
    for j in range(i + 1, len(my_list)):

        if my_list[i] < my_list[j]:
            my_list[i], my_list[j] = my_list[j], my_list[i]

print(my_list)
