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
	priority_queue<int> green;
	priority_queue<int> blue;
	vector<int> surviving_green;
	vector<int> surviving_blue;
	scanf("%d", &t);
	int z = 0;
	while (z<t) {
		if (z > 0)
			printf("\n");	
		scanf("%d %d %d\n", &b, &ng, &nb);
		while (ng--) {
			scanf("%d", &s);
			green.push(s);
		}
		while (nb--) {
			scanf("%d", &s);
			blue.push(s);
		}
		while (1) {
			for (int i=0; i<b; i++) {
				int sg = (green.top());
				int sb = (blue.top());

				green.pop();
				blue.pop();
				
				if (sg > sb)
					surviving_green.push_back(sg-sb);
				else if (sb > sg)
					surviving_blue.push_back(sb-sg);
			
				if (green.empty() || blue.empty())
					break;
			}

			for (auto x : surviving_green)
				green.push(x);

			for (auto x : surviving_blue)
				blue.push(x);

			surviving_green.clear();
			surviving_blue.clear();
			
			if (green.empty() && blue.empty()) {
				printf("green and blue died\n");
				break;
			}
			else if (green.empty()) {
				printf("blue wins\n");
			//	for (auto x : blue)
			//		printf("%d\n", x);
				while (!blue.empty()) {
					printf("%d\n", blue.top());
					blue.pop();
				}
				break;
			}
			else if (blue.empty()) {
				printf("green wins\n");
			//	for (auto x : green)
			//		printf("%d\n", x);
				while (!green.empty()) {
					printf("%d\n", green.top());
					green.pop();
				}
				break;
			}
		}
		z++;
	}
}	



