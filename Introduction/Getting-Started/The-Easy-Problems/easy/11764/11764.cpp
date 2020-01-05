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
	int n, t, c, f;
	scanf("%d", &t);
	int i = 1;
	while (i <= t) {
		scanf("%d", &n);
		if (n == 0)
			printf("Case %d: 0 0\n", i);
		else {
			int high = 0;
			int low = 0;
			scanf("%d", &c);
			n--;
			while (n--) {
				scanf("%d", &f);
				if(f-c > 0)
				       high++;
				else if (c-f > 0)
					low++;

				c = f;
			}
			printf("Case %d: %d %d\n", i, high, low);

		}
		i++;
	}
}

