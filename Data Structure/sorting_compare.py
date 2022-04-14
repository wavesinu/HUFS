import random
import time


def is_sorted(A):
    if len(A) < 2:
        return True

    for i in range(1, len(A)):
        if A[i - 1] > A[i]:
            return False

    return True


def insertion_sort(A):
    for index in range(1, len(A)):
        current = A[index]
        j = index

        while j > 0 and A[j - 1] > current:
            A[j] = A[j - 1]
            j -= 1
        A[j] = current


def merge(A1, A2, A):
    i = j = 0
    while i + j < len(A):
        if j == len(A2) or (i < len(A1) and A1[i] < A2[j]):
            A[i + j] = A1[i]
            i += 1

        else:
            A[i + j] = A2[j]
            j += 1


def merge_sort(A):
    n = len(A)
    if n < 2:
        return

    mid = n // 2
    A1 = A[0:mid]
    A2 = A[mid:n]

    merge_sort(A1)
    merge_sort(A2)
    merge(A1, A2, A)


def quick_sort(S, left, right):
    if left < right:
        pivot = partition(S, left, right)
        quick_sort(S, left, pivot - 1)
        quick_sort(S, pivot + 1, right)


def partition(S, left, right):
    pivot = S[left]
    i = left + 1
    for j in range(left + 1, right + 1):
        if S[j] < pivot:
            S[j], S[i] = S[i], S[j]
            i += 1
    S[i - 1], S[left] = S[left], S[i - 1]
    return i - 1


n = 50  # change this value to compare different algorithms

array = [random.randint(0, 999999999) for _ in range(n)]

array_insertion = array.copy()
start = time.perf_counter()
insertion_sort(array_insertion)
t_insertion = time.perf_counter() - start

array_merge = array.copy()
start = time.perf_counter()
merge_sort(array_merge)
t_merge = time.perf_counter() - start

array_quick = array.copy()
start = time.perf_counter()
quick_sort(array_quick, 0, len(array_quick) - 1)
t_quick = time.perf_counter() - start

if not is_sorted(array_insertion):
    print("insertion_sort: incorrect")
else:
    print("insertion_sort running time : %.5f" % t_insertion)

if not is_sorted(array_merge):
    print("merge_sort:     incorrect")
else:
    print("merge_sort running time : %.5f" % t_merge)

if not is_sorted(array_quick):
    print("quick_sort:     incorrect")
else:
    print("quick_sort running time : %.5f" % t_quick)
