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
	int t, n, x;
	string s, junk;
	scanf("%d", &t);
	while (t--) {
		int i=1;
		int p = 0;	
		vi disp(110, 0);
		scanf("%d", &n);
		while (n--) {
			cin >> s;
			if (s == "LEFT") {
				disp[i] = -1;
				p -= 1;
			}
			if (s == "RIGHT") {
				disp[i] = 1;
				p += 1;
			}
			if (s == "SAME") {
				cin >> junk >> x;
				disp[i] = disp[x];
				p += disp[i];
			}
			i++;
		}
		printf("%d\n", p);

	}
}

