#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>
#include <bitset>

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
	int n, m, c, x;
	int z = 1;
	while (scanf("%d %d %d", &n, &m, &c), n || m || c) {
		printf("Sequence %d\n", z++);
		vi consumption(n+1, 0);
		bitset<22> state;
		for (int i=1; i<=n; i++) {
			scanf("%d", &x);
			consumption[i] = x;
		}
/*		
		printf("\n");
		for (auto y : consumption)
			cout << y << " ";
		printf("\n");
*/
		int cc = 0;
		bool fuse_blown = false;
		int max_power = -1;
		for (int i=1; i<=m; i++) {
			scanf("%d", &x);
			if (state[x]) {
		//		printf("%d was tured off\n", x);
				cc -= consumption[x];
				state.reset(x);
			}
			else {
		//		printf("%d was tured on\n", x);
				cc += consumption[x];
				max_power = max(max_power, cc);
		//		printf("cc=%d maxcc=%d\n", cc, max_power);
				state.set(x);
			}
			if (cc > c) {
				fuse_blown = true;
			}
		}

		if (fuse_blown) {
			printf("Fuse was blown.\n");
		}
		else {
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n",
					max_power);
		}
		printf("\n");
	}
}

