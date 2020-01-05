#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>

using namespace std;

#define ll long long
#define ld long double
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii> 
#define pb push_back
const int INF = 1000000009;
const ld EPS = 10e-9;

int f(int n) {
	int s=0;
	while (n) {
		n = n/10;
		s++;
	}
	return s;
}

int main() {
	int n;
        char c, prev;
	while (1) {
		n = 0;
		while (scanf("%c", &c), c!='\n') {
			if (c=='E') {
				scanf("%c", &c);
				scanf("%c", &c);
				return 0;
			}
			prev = c;
			n++;
		}

		if (n==1 && prev=='1') {
			printf("1\n");
		}
		else {
			int i=2;	
			while (n != f(n)) {
			//	printf("xi-1=%d xi=%d i=%d\n", n, f(n), i);
				n = f(n);
				i++;
			}
			printf("%d\n", i);
		}

		//printf("xi-1=%d xi=%d i=%d\n", n, f(n), i);
	}
}




