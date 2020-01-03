#include <iostream>

using namespace std;

int main() {
	int n, a, b, i, move;

	while (scanf("%d\n", &n), n) {
		move = 0;
		a = 0;
		b = 0;
		i = 0;
		while (n) {
			if (n&1) {
				if (move == 0) a = a | (1<<i);
				else b = b | (1<<i);
				move = (move+1)%2;
			}
			i++;
			n = n>>1;
		}
		printf("%d %d\n", a, b);
	}
}

