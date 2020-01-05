#include <iostream>

using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	i=0;
	while (i++<n) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("Case %d: ",i);
		//(a>b) ? ((a>c) ? printf("%d", c) : printf("%d", a)) : ((b>c) ? printf("%d", c) : printf("%d", b));
		if (a>b) {
			if (a>c) {
				if (b>c) {
					printf("%d", b);
				}
				else {
					printf("%d", c);
				}
			}
			else {
					printf("%d", a);
			}
		}
		else {
			if (b>c) {
				if (a>c) {
					printf("%d", a);
				}
				else {
					printf("%d", c);
				}
			}
			else {
					printf("%d", b);
			}
		
		}
		printf("\n");
	}
}
