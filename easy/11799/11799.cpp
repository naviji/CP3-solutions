#include <iostream>

using namespace std;

int main() {
	int n, num;
	int speed, max_speed = -1;
	scanf("%d", &n);
	for (int i=1; i<=n ;i++) {
		max_speed = -1;
		scanf("%d", &num);
		for (int j=0; j<num; j++) {
			scanf("%d", &speed);
			if (speed > max_speed) {
				max_speed = speed;
			}
		}
		printf("Case %d: %d\n", i, max_speed);
	}
}

