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

int cost(int time, int rate, int period) {
	if (time == 0)
		return 0;
	
	int total = 0;
	time += 1;
	while (time > 0) {
		time -= (period);
		total += rate;
	}
	return total;
}

int main() {
	int t, n, x;
	scanf("%d", &t);
	int i=1;	
	while (i<=t) {
		int miles = 0;
		int juice = 0;
		scanf("%d", &n);
		while (n--) {
			scanf("%d", &x);
			miles += cost(x, 10, 30);
			juice += cost(x, 15, 60);
		}
		if (miles < juice)
			printf("Case %d: Mile %d\n", i, miles);
		else if (juice < miles)
			printf("Case %d: Juice %d\n", i, juice);
		else
			printf("Case %d: Mile Juice %d\n", i, juice);
		i++;
	}


}

