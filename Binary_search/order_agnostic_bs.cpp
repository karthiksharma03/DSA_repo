//order agnostic binary search where we can display the element where the array will be known to its ascending order or 
//descending order and it work's along with that 

#include <iostream>
using namespace std;

int orderAgnosticBinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    bool isAscending = false;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        if (isAscending) {
            if (key < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        } 
		else {
            if (key > arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int arrAsc[] = {1, 3, 5, 7, 9, 11, 13};
    int arrDesc[] = {13, 11, 9, 7, 5, 3, 1};
    int sizeAsc = sizeof(arrAsc) / sizeof(arrAsc[0]);
    int sizeDesc = sizeof(arrDesc) / sizeof(arrDesc[0]);

    int key = 7;
    int indexAsc = orderAgnosticBinarySearch(arrAsc, sizeAsc, key);
    int indexDesc = orderAgnosticBinarySearch(arrDesc, sizeDesc, key);

    if (indexAsc != -1)
        cout << "Element " << key << " found at index " << indexAsc << " in ascending array." << endl;
    else
        cout << "Element " << key << " not found in ascending array." << endl;

    if (indexDesc != -1)
        cout << "Element " << key << " found at index " << indexDesc << " in descending array." << endl;
    else
        cout << "Element " << key << " not found in descending array." << endl;

    return 0;
}

