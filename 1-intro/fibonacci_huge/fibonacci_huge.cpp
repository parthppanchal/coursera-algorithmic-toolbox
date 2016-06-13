#include <iostream>


int get_pisano_period_length(long long m) {
	int i = 3;
	long long fibonacci_modulo_array[3];
	fibonacci_modulo_array[0] = 1;
	fibonacci_modulo_array[1] = 2 % m;
	fibonacci_modulo_array[2] = 3 % m;
	while(fibonacci_modulo_array[1] != 0 || fibonacci_modulo_array[2] != 1) {
		fibonacci_modulo_array[0] = fibonacci_modulo_array[1];
		fibonacci_modulo_array[1] = fibonacci_modulo_array[2];
		fibonacci_modulo_array[2] = (fibonacci_modulo_array[0] +
									 fibonacci_modulo_array[1]) % m;
		i++;
	}
	return i;
}

long long get_fibonaccihuge(long long n, long long m) {
	//write your code here
	if(m > 1) {
		n = n % get_pisano_period_length(m);
	}
	if(n < 2) {
		return n;
	} else {
		long long fibonacci_modulo_array[3];
		fibonacci_modulo_array[0] = 0;
		fibonacci_modulo_array[1] = 1;
		fibonacci_modulo_array[2] = 1;
		for(long long i = 3; i < n + 1; i++) {
			fibonacci_modulo_array[0] = fibonacci_modulo_array[1];
			fibonacci_modulo_array[1] = fibonacci_modulo_array[2];
			fibonacci_modulo_array[2] = (fibonacci_modulo_array[0] +
										 fibonacci_modulo_array[1]) % m;
		}
		return fibonacci_modulo_array[2];
	}
}

int main() {
    long long n, m;
	std::cin >> n >> m;
	std::cout << get_fibonaccihuge(n, m) << '\n';
}
