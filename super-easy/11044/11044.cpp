#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc;
	scanf("%d", &tc);
	int c = 0;	
	while(c<tc) {
//		if (c>=1) {
//			printf("\n");
//		}
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n",(a/3)*(b/3));
		c++;
	}
}
