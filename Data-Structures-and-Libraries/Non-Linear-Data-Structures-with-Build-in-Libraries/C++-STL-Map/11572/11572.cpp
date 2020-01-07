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
	map<int, int> m;
	int t, n, s;

	scanf("%d\n", &t);
	while (t--) {
		scanf("%d", &n);
		int count = 0;
		int maximum = 0;
		m.clear();
		while (n--) {
			scanf("%d", &s);
			if (m.find(s) == m.end()) {
				count++;
			}
			else {
				count = 1;
				m.clear();
			}
			m.insert({s, 1});
			if (count > maximum)
				maximum = count;
		}
		printf("%d\n", maximum);
	}
}
		
