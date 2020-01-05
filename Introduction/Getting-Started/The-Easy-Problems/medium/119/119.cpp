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
	string s;
	int n, money, f;
	string name;
	string fname;
	int z=0;
	while (scanf("%d", &n) != EOF) {
		if (z++ > 0)
			printf("\n");
		map<string, int> m;
		vector<string> v;
		
		for (int i=0; i<n; i++) {
			cin >> s;
			m.insert({s, 0});
			v.pb(s);
		}

		for (int i=0; i<n; i++) {
			cin >> name >> money >> f;
			if (f) {
				int each = money/f;
				int balance = money%f;

				m[name] -= money;
				m[name] += balance;

				for (int j=0; j<f; j++) {
					cin >> fname;
					m[fname] += each;
				}
			}
		}

		for (auto& n : v) {
			cout << n << " " << m[n] << endl;
		}
	}

}

