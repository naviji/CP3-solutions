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
	int n, a, b;
	string s;
	int z = 1;
	while(getline(cin, s), !s.empty()) {
		printf("Case %d:\n", z++);
		scanf("%d\n", &n);
		while (n--) {
			scanf("%d %d\n", &a, &b);
			int temp = a;
			a = min(a, b);
			b = max(temp, b);

			char c = s[a];
			bool is_same = true;
			for (int i=a; i<=b; i++) {
				if (s[i]!=c) {
					is_same = false;
					break;
				}
			}

			if (is_same) {
				printf("Yes\n");
			}
			else {
				printf("No\n");
			}
		}
	}
}

