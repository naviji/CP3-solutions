#include <vector>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;
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
	int t, n, s, q, x, time;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &n, &s, &q);
		vector<queue<int>> B(n, queue<int>());
		stack<int> cc;
		
		int z, w;
		int i=0;
		while(i<n) {
			scanf("%d",&z);
			while (z--) {
				scanf("%d", &w);
				B[i].push(w-1);
			}
			i++;
		}
						
		x = 0;
		time = 0;
		while (true) {
			// unloading
			while (true) {
				if (!cc.empty() && (cc.top()==x)) {
					cc.pop();
				}
				else if (!cc.empty() && (B[x].size()<q)) {
					B[x].push(cc.top());
					cc.pop();
				}
				else {
					break;
				}
				time++;
			}

			// loading
			while (!B[x].empty() && cc.size()<s) {
				cc.push(B[x].front());
				B[x].pop();
				time++;
			}

			bool all_empty = true;
			for (auto b : B) {
				if (!b.empty())
					all_empty = false;
			}

			if (cc.empty() && all_empty)
				break;
			else {
				time += 2;
				x = (x+1)%n;
			}
		}

		printf("%d\n", time);
	}
}






			

