#include <stdio.h>

int primo(int n);

int main() {

	for(int i = 0; i <= 100000; i++) {
		if(primo(i) == 1) {
			printf("%i\n", i);
		}
	}
	return 0;
}

int primo(int n) {

	int divisores, i;
	divisores = 0;


	if(n <= 1) {
		return 0;
	}

	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			divisores++;
		}
	}
	if(divisores == 2) {
		return 1;
	} else {
		return 0;
	}
}
