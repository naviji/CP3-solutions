#include <iostream>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n) {
		int x, y;
		scanf("%d %d", &x, &y);
		for (int k=0; k<n; k++) {
			int i, j;
			scanf("%d %d", &i, &j);
			if (i==x || j==y) 
				printf("divisa\n");
			else if (i>x && j>y)
				printf("NE\n");
			else if (i>x && j<y)
				printf("SE\n");
			else if (i<x && j>y)
				printf("NO\n");
			else if (i<x && j<y)
				printf("SO\n");
		}
	}
}

