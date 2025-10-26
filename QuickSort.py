# Quick Sort - Python (in-place Lomuto)
def partition(a, low, high):
    pivot = a[high]; i = low-1
    for j in range(low, high):
        if a[j] <= pivot:
            i += 1; a[i], a[j] = a[j], a[i]
    a[i+1], a[high] = a[high], a[i+1]; return i+1
def quick_sort(a, low=0, high=None):
    if high is None: high = len(a)-1
    if low < high:
        pi = partition(a, low, high)
        quick_sort(a, low, pi-1)
        quick_sort(a, pi+1, high)
