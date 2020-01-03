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
	int n, a, x;
	while (scanf("%d", &n) != EOF) {
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;

		bool is_stack = true;
		bool is_queue = true;
		bool is_pq = true;
		while (n--) {
			scanf("%d %d", &a, &x);
			if (a == 1) {
				s.push(x);
				q.push(x);
				pq.push(x);
			}
			else {
				if (!s.empty()) {
					int sout = s.top();
					s.pop();
					if (x != sout)
						is_stack = false;
				}
				else
					is_stack = false;

				if (!q.empty()) {
					int qout = q.front();
					q.pop();
					if (x != qout)
						is_queue = false;
				}
				else
					is_queue = false;

				if (!pq.empty()) {
					int pqout = pq.top();
					pq.pop();
					if (x != pqout)
						is_pq = false;
				}
				else
					is_pq = false;
			}
		}

		if (!is_stack && !is_queue && !is_pq)
			printf("impossible\n");
		else if (is_stack && !is_queue && !is_pq)
			printf("stack\n");
		else if (!is_stack && is_queue && !is_pq)
			printf("queue\n");
		else if (!is_stack && !is_queue && is_pq)
			printf("priority queue\n");
		else
			printf("not sure\n");
	}
}


