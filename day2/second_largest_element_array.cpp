#include <bits/stdc++.h>
using namespace std;
 
// Function to print the second largest elements 
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
 
    // There should be atleast two elements
    if (arr_size < 2) {
        printf(" Invalid Input ");
        return;
    }
 
    int largest = second = INT_MIN;
 
    // find the largest element
    for (int i = 0; i < arr_size; i++) {
        largest = max(largest, arr[i]);
    }
 
    // find the second largest element
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] != largest)
            second = max(second, arr[i]);
    }
    if (second == INT_MIN)
        cout << "There is no second largest element << endl;
    else
        cout << "The second largest element is : "<< second << endl;
}
 
int main()
{
    int arr[] = { 121, 135, 1, 120, 344, 131,786 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}
