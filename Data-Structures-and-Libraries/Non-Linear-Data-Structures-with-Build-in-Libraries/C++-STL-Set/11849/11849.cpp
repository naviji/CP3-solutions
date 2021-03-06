#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<k; i++)
#define FORD(i,j,k) for(int i=j; i>=k; i--)
#define ll long long
#define pii pair<int, int>
#define vi vector<int >
#define pb push_back
#define REP(i,n) FOR(i,0,n)
#define ld long double
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;
const ld EPS = 10e-9;

int main() {
	int n, m, x;
	set<int> ja;
	set<int> ji;

	while (scanf("%d %d\n", &n, &m), n || m) {
		while (n--) {
			scanf("%d\n", &x);
			ja.insert(x);
		}
		while (m--) {
			scanf("%d\n", &x);
			ji.insert(x);
		}

		int count = 0;
		for (auto x : ja) {
			if (ji.find(x) != ji.end())
				count++;
		}

		printf("%d\n", count);
		ja.clear();
		ji.clear();
	}
}
