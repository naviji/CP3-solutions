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

int main() {
	int b, n, c, d, v, r;
	while (scanf("%d %d", &b, &n), b || n) {
		vi reserve(b+1, 0);
		for (int i=1; i<=b; i++) {
			scanf("%d", &r);
			reserve[i] = r;
		}

		for (int i=0; i<n; i++) {
			scanf("%d %d %d", &d, &c, &v);
			reserve[d] -= v;
			reserve[c] += v;
		}

		bool S = true;
		for (int i=1; i<=b; i++) {
			if (reserve[i] < 0) {
				S = false;
				break;
			}
		}

		if (S)
			printf("S\n");
		else
			printf("N\n");
	}
}


