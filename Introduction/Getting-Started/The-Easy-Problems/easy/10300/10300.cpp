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
	int t, n, s, ef, a;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int sum = 0;
		while (n--) {
			scanf("%d %d %d", &s, &a, &ef);
			sum += (s*ef);
		}
		printf("%d\n", sum);
	}


}

