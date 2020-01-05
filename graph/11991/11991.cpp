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
	int n, m, x, k, v;
	vector<vi> AdjList(1000010);
	scanf("%d %d\n", &n, &m);
	int i = 1;
	while (n--) {
		scanf("%d", &x);
		AdjList[x].push_back(i);
		i++;
	}
	while (m--) {
		scanf("%d %d", &k, &v);
		if (k<=AdjList[v].size()) {
			printf("%d\n", AdjList[v][k-1]);
		}
		else	printf("0\n");
	}
}
