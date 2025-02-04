#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (n < 3) { // A valid bitonic sequence must have at least 3 elements
        cout << "NO" << endl;
        delete[] A;
        return 0;
    }

    // Check for the strictly increasing part
    int i = 0;
    while (i + 1 < n && A[i] < A[i + 1]) {
        i++;
    }

    // If no increasing part or the peak is at the first/last element
    if (i == 0 || i == n - 1) {
        cout << "NO" << endl;
        delete[] A;
        return 0;
    }

    // Check for the strictly decreasing part
    while (i + 1 < n && A[i] > A[i + 1]) {
        i++;
    }

    // If we traversed the entire array, it is a bitonic sequence
    if (i == n - 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    delete[] A;
    return 0;
}