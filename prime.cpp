#include <cstdio>
using namespace std;
int main() {
	bool prime[10001] = {1,1,};

	for (int i = 2; i <= 10000; i++) {
		if (prime[i] == false) {
			for (int j = i*i; j <= 10000; j += i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 0; i <= 10000; i++) {
		prime[i] = !prime[i];
	}
	for (int i = 0; i <= 10000; i++) {
		if (prime[i] == true)
			printf("%d\n", i); 
	}
	return 0;
}
