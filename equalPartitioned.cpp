//check if the array can be partitioned into 3 different parts with equal sum.


#include <iostream>
using namespace std;

int canPartitionIntoThreeParts(int array[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; ++i) {
        totalSum += array[i];
    }

    if (totalSum % 3 != 0) {
        return false;
    }

    int targetSum = totalSum / 3;
    int currentSum = 0;
    int partitionsFound = 0;

    for (int i = 0; i < size; ++i) {
        currentSum += array[i];
        if (currentSum == targetSum) {
            currentSum = 0;
            partitionsFound++;
        }
    }

    if(partitionsFound == 3)
    {
        return true;
    }
    return -1;
}

int main() {
    int array[] = {5,2,6,1,1,1,1,4};
    int size = sizeof(array) / sizeof(array[0]);
    cout<<canPartitionIntoThreeParts(array, size);
    return 0;
}