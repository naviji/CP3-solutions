#include <iostream>

using namespace std;

int matrix[100][100];
int main() {
	int sz, p;
	while (scanf("%d %d\n", &sz, &p), (sz || p)) {
		int row = sz/2 + 1;
		int col = sz/2 + 1;
		int l=1, d=2, r=2, u=2;
		int count = 1;
		matrix[row][col] = count++;

		if ((count-1) == p) {
			sz = 0;
		}
		for (int i=0; i<sz/2; i++) {
			

			row = row-1;
			if (count == p) break;
			matrix[row][col] = count++;

			for (int j=0; j<l+(2*i); j++) {
				col = col-1;
				if (count == p) break;
				matrix[row][col] = count++;
			}

			for (int j=0; j<d+(2*i); j++) {
				row = row+1;
				if (count == p) break;
				matrix[row][col] = count++;
			}

			for (int j=0; j<r+(2*i); j++) {
				col = col+1;
				if (count == p) break;
				matrix[row][col] = count++;
			}

			for (int j=0; j<u+(2*i); j++) {
				row = row-1;
				if (count == p) break;
				matrix[row][col] = count++;
			}		
		}
/*
		for (int i=1; i<=sz; i++) {
			for (int j=1; j<=sz; j++) {
				printf("%3d ", matrix[i][j]);
			}
			printf("\n");
		}
*/
		printf("Line = %d, column = %d.\n", row, col);
	}
}
