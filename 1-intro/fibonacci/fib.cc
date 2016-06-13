#include <iostream>

int calc_fib(int n) {
    int fib_arr[n + 1];
    fib_arr[0] = 0;
    fib_arr[1] = 1;
    for(int i = 2; i < n + 1; i++) {
        fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
    }
    return fib_arr[n];
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << calc_fib(n) << '\n';
    return 0;
}
