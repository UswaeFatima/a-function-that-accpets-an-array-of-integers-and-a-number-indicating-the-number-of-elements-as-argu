//write a function that accpets an array of integers and a number  indicating the number of elements as arguments. the function shuold recusively calculated the sum of all the numbers in the arry. demonstrate the function  in a driver program
#include <iostream>
using namespace std;

int sumArray(int arr[], int numElements) {
    if (numElements == 0) {
        return 0;
    } else {
        return arr[numElements-1] + sumArray(arr, numElements-1);
    }
}

int main() {
    int arr[] = {1, 1, 4, 5, 10};
    int numElements = sizeof(arr) / sizeof(arr[0]);
    int total = sumArray(arr, numElements);
    cout << "The sum of the array elements is: " << total << endl;
    return 0;
}

