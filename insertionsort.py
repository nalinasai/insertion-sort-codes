#first line input contains size of the input
#second line input contains To get the input of a list from the user with spaces.


size_of_list = int(input("input the size of list: "))
unsorted_string_list = input("input the unsorted integers with spaces: ")


input_list = []
unsorted_list = unsorted_string_list.split()

for element in unsorted_list:
    input_list.append(int(element))



for i in range(1,size_of_list):
    key = input_list[i]
    j = i-1
    while(j>=0 and key<input_list[j]):
        input_list[j+1] = input_list[j]
        j = j-1
    input_list[j+1] = key

for i in input_list:
    print(i, end=" ")

