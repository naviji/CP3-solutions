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
	int t, l, m, count, side, cs, cars;
	string s;
	queue<int> bank[2];
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &l, &m);
		while (m--) {
			cin >> cs >> s;
			if (s.compare("left") == 0) {
				bank[0].push(cs);
			}
			else {
				bank[1].push(cs);
			}
		}

		count = 0;
		side = 0;
		while (true) {
			int cap = l*100;
			cars = 0;
			while (!bank[side].empty() && (cap-bank[side].front() >= 0)) {
				cap = cap-bank[side].front();
				bank[side].pop();
				cars++;
			}

			if (cars==0 && bank[0].empty() && bank[1].empty())
				break;

			count++;
			side = (side+1)%2;
		}
		printf("%d\n", count);
	}
}

