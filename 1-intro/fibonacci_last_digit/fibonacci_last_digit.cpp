#include <iostream>

int get_fibonacci_last_digit(int n) {
    int fibonacci_last_digit_array[n + 1];
    fibonacci_last_digit_array[0] = 0;
    fibonacci_last_digit_array[1] = 1;
    for(int i = 2; i < n + 1; i++) {
        fibonacci_last_digit_array[i] = (fibonacci_last_digit_array[i -  1] +
                                         fibonacci_last_digit_array[i - 2]) % 10;
    }
  return fibonacci_last_digit_array[n];
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}
