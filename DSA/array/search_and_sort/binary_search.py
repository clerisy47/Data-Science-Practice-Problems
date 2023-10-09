def binary_search(arr, x):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            left = mid + 1
        else:
            right = mid - 1

    return -1

# Time complexity: O(log(n))
# Space Complexity: O(1)

def find_all_occurence(arr, x):
    initial_index = binary_search(arr, x)
    occurence_list = [initial_index]
    index = initial_index
    # left side of index
    while True:
        index = index -1
        if arr[index] == x:
            occurence_list.append(index)
            index-=1
        else:
            break
    # right side of index
    index = initial_index
    while True:
        index = index + 1
        if arr[index] == x:
            occurence_list.append(index)
            index+=1
        else:
            break

    return sorted(occurence_list)
    
numbers = [1,4,6,9,11,15,15,15,17,21,34,34,56]
number_to_find = 15  

print(find_all_occurence(numbers, number_to_find))