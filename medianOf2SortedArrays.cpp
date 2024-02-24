#include <iostream>
using namespace std;

double findMedianSortedArrays(int nums1[], int size1, int nums2[], int size2) {
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    int i = 0, j = 0, k = 0;

    // Merge the sorted arrays
    while (i < size1 && j < size2) {
        if (nums1[i] <= nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }

    // Copy remaining elements from nums1
    while (i < size1) {
        mergedArray[k++] = nums1[i++];
    }

    // Copy remaining elements from nums2
    while (j < size2) {
        mergedArray[k++] = nums2[j++];
    }

    // Calculate the median
    if (mergedSize % 2 == 0) {
        // If the merged array has even length, return the average of the middle elements
        int middle1 = mergedSize / 2 - 1;
        int middle2 = mergedSize / 2;
        return (mergedArray[middle1] + mergedArray[middle2]) / 2.0;
    } else {
        // If the merged array has odd length, return the middle element
        return mergedArray[mergedSize / 2];
    }
}

int main() {
    int nums1[] = {1, 3};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, size1, nums2, size2);
    std::cout << "Median: " << median << std::endl;

    return 0;
}
