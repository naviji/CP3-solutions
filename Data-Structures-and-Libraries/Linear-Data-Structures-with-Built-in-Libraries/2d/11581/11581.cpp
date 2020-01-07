#include <iostream>

using namespace std;

void f(int m[3][3]);

bool finished(int m[3][3]) {
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			if (m[i][j] == 1) {
				return false;
			}
		}
	}
	return true;
}

int k(int m[3][3]) {
	if (finished(m))
		return -1;
	f(m);
	return 1+k(m);
}

void f(int m[3][3]) {
	int t[3][3];

	for (int i=0; i<3; i++) 
		for (int j=0; j<3; j++)
			t[i][j] = m[i][j];
	m[0][0] = t[0][1] + t[1][0];
	m[0][1] = t[0][0] + t[0][2] + t[1][1];
	m[0][2] = t[0][1] + t[1][2];
	m[1][0] = t[2][0] + t[1][1] + t[0][0];
	m[1][1] = t[1][0] + t[2][1] + t[1][2] + t[0][1];
	m[1][2] = t[1][1] + t[2][2] + t[0][2];
	m[2][0] = t[2][1] + t[1][0];
	m[2][1] = t[2][0] + t[1][1] + t[2][2];
	m[2][2] = t[2][1] + t[1][1] + t[1][2];

	for (int i=0; i<3; i++) 
		for (int j=0; j<3; j++)
			m[i][j] = m[i][j]%2;
	
}

void print(int m[3][3]) {
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	int n;
	int m[3][3];

	scanf("%d\n", &n);
	while(n--) {
		for (int i=0; i<3; i++) {
			char a, b, c;
			scanf("%c%c%c\n", &a, &b, &c);
			m[i][0] = a-'0';
			m[i][1] = b-'0';
			m[i][2] = c-'0';
		}
/*		print(m);
		f(m);
		print(m);
		f(m);
		print(m);
		f(m);
		print(m);
		f(m);
		print(m);
		if (finished(m)) {
			printf("finished\n");
		}
*/	
		printf("%d\n", k(m));
	}
}

