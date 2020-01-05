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
	int t, n;
	scanf("%d", &t);
	int x;
	while (t--) {
		int smallest = 1000;
		int largest = -1;

		scanf("%d", &n);
		while (n--) {
			scanf("%d", &x);
			if (x < smallest)
				smallest = x;
			if (x > largest)
				largest = x;
		}
		printf("%d\n", 2*(largest-smallest));
	}

}

