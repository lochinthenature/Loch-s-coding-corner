#include <iostream>
#include <cmath>
#define LLONG_MAX 100000000
long long intPower(int base, int exp) 
{
    long long result = 1;
    for (int i = 0; i < exp; i++) 
    {
        result *= base;
        if (result > LLONG_MAX) 
        {
            std::cout << "Overflow detected!" << std::endl;
            return -1;
        }
    }
    return result;
}
void LuckyEvenNumbers(int n, int k) {

    long long leaves = 1;
    for (int j = 2; j <= n; j++) 
    {
        long long powerJ = intPower(j, j);
        if (powerJ == -1) return;
        leaves += powerJ;
        if (j > k) 
        {
            long long powerDiff = intPower(j - k, j - k);
            if (powerDiff == -1) return;
            leaves -= powerDiff;
        }
    }

    if (leaves % 2 == 0) 
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    int t;
    std::cout << "Enter number of test cases: ";
    std::cin >> t;

    int* n = new int[t];
    int* k = new int[t];
    std::cout << "Enter numbers n and k for each test case:" << std::endl;
    for (int i = 0; i < t; i++) {
        std::cin >> n[i] >> k[i];
    }

    for (int i = 0; i < t; i++) {
        LuckyEvenNumbers(n[i], k[i]);
    }
    delete[] n;
    delete[] k;
    return 0;
}
