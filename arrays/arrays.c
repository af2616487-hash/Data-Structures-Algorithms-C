#include <stdio.h>
#include <stdlib.h>

// Function to display array
void displayArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search element in array
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

// Function to find maximum element
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find minimum element
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Main function
int main() {
    int arr[] = {45, 23, 67, 12, 89, 5, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    displayArray(arr, n);
    
    printf("Max element: %d\n", findMax(arr, n));
    printf("Min element: %d\n", findMin(arr, n));
    
    int search = linearSearch(arr, n, 67);
    if (search != -1)
        printf("Element found at index: %d\n", search);
    else
        printf("Element not found\n");
    
    return 0;
}
