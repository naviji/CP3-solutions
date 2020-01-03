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
	int n, x;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (scanf("%d", &n), n) {
		while (n--) {
			scanf("%d", &x);
			pq.push(x);
		}
		int cost = 0;
		while (pq.size() > 1) {
			int first = pq.top();
			pq.pop();
			int second = pq.top();
			pq.pop();
			cost += (first + second);
			pq.push(first+second);
		}

		printf("%d\n", cost);
		while (!pq.empty())
			pq.pop();
	}
}

