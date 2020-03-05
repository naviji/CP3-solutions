#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>
#include <cstring>

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
	int a[1010];
	int b[1010];
	int tc, n, x;
	scanf("%d", &tc);
	while (tc--) {

		memset(a, 0, sizeof a);
		scanf("%d", &n);
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
		
		int s = 0;
		for (int i=1; i<n; i++) {
			for (int j=i-1; j>=0; j--) {
				if (a[j] <= a[i])
					s++;
			}
		}
		printf("%d\n", s);
	}
}

