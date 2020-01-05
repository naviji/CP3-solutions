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
	int k, m, x, c, r;
	while (scanf("%d %d\n", &k, &m), k) {
		set<int> s;
		for (int i=0; i<k; i++) {
			cin >> x;
			s.insert(x);
//			cout << x << endl;
		}
		vi need(110, 0);
		for (int i=0; i<m; i++) {
			cin >> c >> r;
			need[i] = r;
//			cout << c << " " << r << endl;
			for (int j=0; j<c; j++) {
				cin >> x;
				if (s.find(x) != s.end())
					need[i]--;
//				cout << x << endl;
			}
		}
		
		bool graduate = true;
		for (auto x : need) {
			if (x > 0) {
				graduate = false;
				break;
			}
		}

		if (graduate) printf("yes\n");
		else printf("no\n");


	}
}

