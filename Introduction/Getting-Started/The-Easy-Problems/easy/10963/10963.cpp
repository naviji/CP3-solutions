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
	int t, n, north, south;
	scanf("%d", &t);
	int i=0;
	while (i<t)  {
		if (i>0)
			printf("\n");
		scanf("%d", &n);
		int diff = INF;
		bool can_close = true;

		if (n==0) {
			printf("yes\n");
			i++;
			continue;
		}

		if (n==1) {
			scanf("%d %d", &north, &south);
			printf("yes\n");
			i++;
			continue;
		}
		
		scanf("%d %d", &north, &south);
		diff = north-south;
		n--;
		while (n--) {
			scanf("%d %d", &north, &south);
			if (diff != (north-south))
				can_close = false;
		}

		if (can_close) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
		i++;
	}
}

