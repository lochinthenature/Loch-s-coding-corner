#include <iostream>
using namespace std;

// Function to manually sort an array in descending order using pointers
void sortDescending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of integers in the array
        cin >> n;

        int a[100], even[100], odd[100]; // Arrays for input, even, and odd numbers
        int* evenPtr = even, * oddPtr = odd; // Pointers for even and odd arrays
        int evenCount = 0, oddCount = 0;

        // Read the input array and classify into even and odd using pointers
        for (int i = 0; i < n; i++) {
            cin >> *(a + i);
            if (*(a + i) % 2 == 0) {
                *(evenPtr++) = *(a + i); // Add to even array and increment pointer
                evenCount++;
            }
            else {
                *(oddPtr++) = *(a + i); // Add to odd array and increment pointer
                oddCount++;
            }
        }

        // Sort even and odd arrays in descending order
        sortDescending(even, evenCount);
        sortDescending(odd, oddCount);

        // Combine even and odd numbers, with even first
        int sortedArray[100], * sortedPtr = sortedArray;
        for (int i = 0; i < evenCount; i++) {
            *(sortedPtr++) = *(even + i);
        }
        for (int i = 0; i < oddCount; i++) {
            *(sortedPtr++) = *(odd + i);
        }

        // Calculate the maximum points
        long long s = 0;
        int points = 0;
        for (int i = 0; i < n; i++) {
            s += *(sortedArray + i); // Add the current number to s
            if (s % 2 == 0) {       // If the sum is even, earn a point
                points++;
                while (s % 2 == 0) {
                    s /= 2; // Divide by 2 until it becomes odd
                }
            }
        }

        // Output the result for this test case
        cout << points << endl;
    }

    return 0;
}
