// Interpolation Search - C++ (recursive)
int interpolationSearch(int arr[], int lo, int hi, int x) {
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        int pos = lo + ((hi - lo) * (x - arr[lo])) / (arr[hi] - arr[lo]);
        if (arr[pos] == x) return pos;
        if (arr[pos] < x) return interpolationSearch(arr, pos+1, hi, x);
        if (arr[pos] > x) return interpolationSearch(arr, lo, pos-1, x);
    }
    return -1;
}
