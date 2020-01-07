#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n, a, b;
	bool found[3010];
	bool is_jolly;
	while (scanf("%d", &n) != EOF) {
		is_jolly = true;
		memset(found, false, sizeof(found));
		scanf("%d", &a);
		for (int i=0; i<n-1; i++) {
			scanf("%d", &b);
			found[abs(a-b)] = true;
			a = b;
		}

		for (int i=1; i<=n-1; i++) {
			if (!found[i]) {
				is_jolly = false;
				break;
			}
		}

		if (is_jolly) {
			printf("Jolly\n");
		}
		else {
			printf("Not jolly\n");
		}
	}
}


