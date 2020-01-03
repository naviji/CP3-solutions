#include <iostream>

using namespace std;

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int a, b;
		scanf("%d %d", &a, &b);
		(a<b) ? printf("<") : (a>b) ? printf(">") : printf("=");
		printf("\n");
	}
}
