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
	int t, n, balance, x;
	int i = 1;
	while (scanf("%d", &n), n) {
		balance = 0;
		while (n--) {
			scanf("%d", &x);
			if (x == 0)
				balance--;
			else
				balance++;
		}
		printf("Case %d: %d\n", i++, balance);
	}
}

