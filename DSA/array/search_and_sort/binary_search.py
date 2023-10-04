def binary_search(arr, x):
    """
    Searches for an element x in a sorted array arr using binary search algorithm.
    
    Parameters:
    arr (list): A sorted list of elements
    x (int or float): The element to search for
    
    Returns:
    int: The index of the element if found, -1 otherwise
    """
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