#include <iostream>
#include <vector>

using namespace std;

// Returns a vector containing the first n Fibonacci numbers
std::vector<long long> fibonacci(int n) {
    std::vector<long long> fib;
    if (n <= 0) return fib;
    fib.push_back(0);
    if (n == 1) return fib;
    fib.push_back(1);
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    return fib;
}

