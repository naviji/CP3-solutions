#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <bitset>
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

template<std::size_t N>
struct Comparer {
	bool operator() (const std::bitset<N>& x, const std::bitset<N>& y)
	{
	    for (int i = N-1; i >= 0; i--) {
		if (x[i] ^ y[i]) return y[i];
	    }
	    return false;
	}
};

int main() {
	int n;
	map<bitset<500>, int, Comparer<500>> m;
	int c1, c2, c3, c4, c5;
	while (scanf("%d\n", &n), n) {
		m.clear();
		while (n--) {
			scanf("%d %d %d %d %d\n", &c1, &c2, &c3, &c4, &c5);
			bitset<500> b;
			b.set(c1);
			b.set(c2);
			b.set(c3);
			b.set(c4);
			b.set(c5);
			if (m.find(b) != m.end()) {
			       m[b]++;
			}
	 		else {
				m.insert({b, 1});
			}
		}

		int maximum = -1;
		for (const auto& [k, v] : m)
			if (v > maximum)
				maximum = v;


		int count = 0;
		for (const auto& [k, v] : m)
			if (v == maximum)
				count += v;
		printf("%d\n", count);
	}
}


