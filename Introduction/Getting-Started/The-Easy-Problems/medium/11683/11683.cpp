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
	int h, l, x;
	int v[10001];
	while (scanf("%d %d", &h, &l), h) {
		for (int i=0; i<l; i++) {
			scanf("%d", &x);
			v[i] = x;
		}

		int count = 0;
		for (int i=0; i<h; i++) {
			bool used = false;
			for (int j=0; j<l; j++) {
				if (v[j] == i) {
					v[j]++;
					if (!used) {
						used = true;
						count++;
					}
				}
				else if (v[j]>i && used)
					used = false;
			}
		}
		printf("%d\n", count);
		/*int inc=0;
		int dec=0;

		
		for (int i=1; i<l; i++) {
			inc += max(v[i]-v[i-1], 0);
			dec += max(v[i-1]-v[i], 0);
		}
		count = max(inc, dec) + (h-mx);	*/
	}

}

