import timeit


def merge_sort(array):
    n = len(array)
    if n < 2:
        return
    else:
        # middle is the point where the array is divided into two subarrays
        middle = len(array) // 2
        right = array[:middle]
        left = array[middle:]

        # sort the two halves
        merge_sort(right)
        merge_sort(left)

        i = j = k = 0
        while i < len(right) and j < len(left):
            if right[i] < left[j]:
                array[k] = right[i]
                i += 1
            else:
                array[k] = left[j]
                j += 1
            k += 1

        while i < len(right):
            array[k] = right[i]
            i += 1
            k += 1

        while j < len(left):
            array[k] = left[j]
            j += 1
            k += 1


def insertion_sort(array):
    for index in range(1, len(array)):
        current_val = array[index]
        current_pos = index

        while current_pos > 0 and array[current_pos - 1] > current_val:
            array[current_pos] = array[current_pos - 1]
            current_pos -= 1

        array[current_pos] = current_val


def quick_sort(array):
    # if
    if len(array) <= 1:
        return array

    pivot, tail = array[0], array[1]
    left = [elem for elem in tail if elem <= pivot]
    right = [elem for elem in tail if elem > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)


if __name__ == '__main__':
    array = [9, 5, 1, 4, 3, 10, 11, 54, 90]

    # measure insertion sort runtime
    start_time_insertion = timeit.default_timer()
    insertion_sort(array)
    terminate_time_insertion = timeit.default_timer()
    print("%f sec" % (terminate_time_insertion - start_time_insertion))

    # measure merge sort runtime
    start_time_merge = timeit.default_timer()
    merge_sort(array)
    terminate_time_merge = timeit.default_timer()
    print("%f sec" % (terminate_time_merge - start_time_merge))

    # measure quick sort runtime
    start_time_quick = timeit.default_timer()
    merge_sort(array)
    terminate_time_quick = timeit.default_timer()
    print("%f sec" % (terminate_time_quick - start_time_quick))


