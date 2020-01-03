#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <sstream>
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

struct Query {
	int id;
	int period;
};

struct CompareQuery {
	bool operator()(Query const& q1, Query const& q2) {
		if (q1.period != q2.period)
			return q1.period > q2.period;
		return q1.id > q2.id;
	}
};

int main() {
	int periods[3010];
	priority_queue<Query, vector<Query>, CompareQuery> pq;
	string s, junk;
	int id, p, k;
	stringstream ss;
	while (getline(cin, s)) {
		if (s.compare("#") == 0) {
			break;
		}

		stringstream ss(s);
		ss >> junk >> id >> p;
		periods[id] = p;
		pq.push({id, p});
	}
	scanf("%d\n", &k);

	while (k--) {
		id = pq.top().id;
		p = pq.top().period;
		printf("%d\n", id);
		pq.pop();
		pq.push({id, p+periods[id]});
	}
}


