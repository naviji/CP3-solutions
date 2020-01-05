#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>

using namespace std;

#define ll long long
#define ld long double
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii> 
#define pb push_back
const int INF = 1000000009;
const ld EPS = 10e-9;

int main() {
	int n;
	char c;
	while (scanf("%d\n", &n), n) {
		bool rfound = false;
		bool dfound = false;
		int ri = 0;
		int di = 0;
		int mind = INF;
		int i = 0;
		while (scanf("%c", &c), c!='\n') {
//			printf("%c\n", c);
			if (c == 'Z')
				mind = 0;
			else if (c == 'R' && !rfound) {
				ri = i;
				rfound = true;
				if (rfound && dfound) {
					mind = min(mind, abs(ri-di));
					dfound = false;
				}
			}
			else if (c == 'R' && rfound) {
				ri = i;
			}
			else if (c == 'D' && !dfound) {
				di = i;
				dfound = true;
				if (rfound && dfound) {
					mind = min(mind, abs(ri-di));
					rfound = false;
				}
			}
			else if (c == 'D' && dfound) {
				di = i;
			}
			i++;
		}
		printf("%d\n", mind);	
	}
}

