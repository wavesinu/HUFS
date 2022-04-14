import timeit
|


def insertion_sort(array):
    # index : from 1 to n(size of array)-1
    for index in range(1, len(array)):
        current_val = array[index]
        current_pos = index

        # element array[current_pos - 1] must be after current
        while current_pos > 0 and array[current_pos - 1] > current_val:
            array[current_pos] = array[current_pos - 1]
            current_pos -= 1

        array[current_pos] = current_val


def merge_sort(array):
    if len(array) > 1:
        #  middle :  the point where the array is divided into two subarrays
        middle = len(array) // 2
        leftside = array[:middle]
        rightside = array[middle:]

        # Sort the two subarrays
        merge_sort(leftside)
        merge_sort(rightside)

        i = j = k = 0

        while i < len(leftside) and j < len(rightside):
            if leftside[i] < rightside[j]:
                array[k] = leftside[i]
                i += 1
            else:
                array[k] = rightside[j]
                j += 1
            k += 1

        while i < len(leftside):
            array[k] = leftside[i]
            i += 1
            k += 1

        while j < len(rightside):
            array[k] = rightside[j]
            j += 1
            k += 1


def partition(array, low, high):
    # choose the rightmost element as pivot
    pivot = array[high]

    # pointer for greater element
    i = low - 1

    # traverse through all elements
    # compare each element with pivot
    for j in range(low, high):
        if array[j] <= pivot:
            # if element smaller than pivot is found
            # swap it with the greater element pointed by i
            i += 1

            # swapping element at i with element at j
            (array[i], array[j]) = (array[j], array[i])

    # swap the pivot element with the greater element specified by i
    (array[i + 1], array[high]) = (array[high], array[i + 1])

    # return the position from where partition is done
    return i + 1


# function to perform quicksort
def quickSort(array, low, high):
    if low < high:
        # find pivot element such that
        # element smaller than pivot are on the left
        # element greater than pivot are on the right
        pi = partition(array, low, high)

        # recursive call on the left of pivot
        quickSort(array, low, pi - 1)

        # recursive call on the right of pivot
        quickSort(array, pi + 1, high)


def quick_sort(array):
    if len(array) <= 1:
        return array

    pivot = array[0]
    tail = array[1:]

    leftside = [x for x in tail if x <= pivot]
    rightside = [x for x in tail if x > pivot]

    return quick_sort(leftside) + [pivot] + quick_sort(rightside)


A = [5, 3, 78, 9, 12, 45, 61, 98, 104, 202, 17]

start_time_quick = timeit.default_timer()
quick_sort(A)
# quickSort(array, 0, len(array) - 1)
terminate_time_quick = timeit.default_timer()
print("%f" % (terminate_time_quick - start_time_quick))

start_time_insertion = timeit.default_timer()
insertion_sort(A)
terminate_time_insertion = timeit.default_timer()
print("%f" % (terminate_time_insertion - start_time_quick))

start_time_merge = timeit.default_timer()
merge_sort(A)
terminate_time_merge = timeit.default_timer()
print("%f" % (terminate_time_merge - start_time_merge))
