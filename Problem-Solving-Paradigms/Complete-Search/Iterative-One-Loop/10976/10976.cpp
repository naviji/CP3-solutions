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
	int k;
	while (scanf("%d", &k) != EOF) {
		double x = 2*k;
		double y = 2*k;


		vii v;
		while (y>k) {
			x = (k*y)/(y-k);
			if (x>=1 && ((int)x ==x)) {
				v.pb({x, y});
			}
			y--;
		}
		int n = v.size();
		cout << n << endl;
		for (int i=n-1; i>=0; i--) {
			printf("1/%d = 1/%d + 1/%d\n",
					k, v[i].first, v[i].second);
		}
/*
		double y = k+1;
		double x = y*k;
		while (x>=2*k) {
			y = (k*x)/(x-k);
			if ((int)y == y) {
				cout << x << " " << y << endl;
			}
			x--;
		}
*/

	}


}

