def binary(list1, num):
    low = 0
    high = len(list1) - 1
    mid = 0

    while low <= high:

        mid = (high + low) // 2


        if list1[mid] < num:
            low = mid + 1

        elif list1[mid] > num:
            high = mid - 1

        else:
            return mid
            return -1

list1 = [23, 35, 47, 60, 72, 89, 97]
num = 60

result = binary(list1, num)

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in list1")
