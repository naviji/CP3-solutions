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
	int t, b, ng, nb, s;
	multiset<int, greater<int>> green;
	multiset<int, greater<int>> blue;
	multiset<int, greater<int>> surviving_green;
	multiset<int, greater<int>> surviving_blue;
	scanf("%d", &t);
	int z = 0;
	while (z<t) {
		if (z > 0)
			printf("\n");	
		green.clear();
		blue.clear();
		surviving_green.clear();
		surviving_blue.clear();
		scanf("%d %d %d\n", &b, &ng, &nb);
		while (ng--) {
			scanf("%d", &s);
			green.insert(s);
		}
		while (nb--) {
			scanf("%d", &s);
			blue.insert(s);
		}
		while (1) {
			for (int i=0; i<b; i++) {
				int sg = *(green.begin());
				int sb = *(blue.begin());
				green.erase(green.begin());
				blue.erase(blue.begin());

				if (sg > sb)
					surviving_green.insert(sg-sb);
				else if (sb > sg)
					surviving_blue.insert(sb-sg);
			
				if (green.empty() || blue.empty())
					break;
			}

			green.insert(surviving_green.begin(),
					surviving_green.end());

			blue.insert(surviving_blue.begin(),
					surviving_blue.end());

			surviving_green.clear();
			surviving_blue.clear();
			
			if (green.empty() && blue.empty()) {
				printf("green and blue died\n");
				break;
			}
			else if (green.empty()) {
				printf("blue wins\n");
				for (auto x : blue)
					printf("%d\n", x);
				break;
			}
			else if (blue.empty()) {
				printf("green wins\n");
				for (auto x : green)
					printf("%d\n", x);
				break;
			}
		}
		z++;
	}
}	



