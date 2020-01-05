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
	int t;
	string s;
	int r;
	scanf("%d", &t);
	int i=1;
	while (i<=t) {
		vector<pair<string, int>> v;
		int max = -1;
		for (int i=0; i<10; i++) {
			cin >> s >> r;
			if (r > max)
				max = r;
			v.pb({s, r});
		}
		printf("Case #%d:\n", i);
		for(auto& x : v) {
			if (x.second == max)
				cout << x.first << endl;
		}
		i++;
	}		
}

