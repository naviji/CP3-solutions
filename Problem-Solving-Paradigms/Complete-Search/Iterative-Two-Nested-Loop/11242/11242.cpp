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
	int f, r, x;
	while (scanf("%d %d", &f, &r), f) {
		vi front;
		vi back;
		vector<double> ratio;
		vi spread;

		for (int i=0; i<f; i++) {
			scanf("%d", &x);
			front.pb(x);
		}

		for (int i=0; i<r; i++) {
			scanf("%d", &x);
			back.pb(x);
		}


		for (int i=0; i<f; i++) {
			for (int j=0; j<r; j++) {
				if (front[i])
					ratio.pb((back[j]*1.0)/front[i]);
			}
		}

		sort(ratio.begin(), ratio.end());

		double max_spread = -1;
		for (int i=0; i<ratio.size()-1; i++) {
			if (ratio[i]) {
				double ns = ratio[i+1]/ratio[i];
				if (ns > max_spread)
					max_spread = ns;
			}
		}

		printf("%.2lf\n", max_spread);
	}
}

