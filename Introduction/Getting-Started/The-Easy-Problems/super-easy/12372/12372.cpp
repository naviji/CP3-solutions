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
	int t, a, b, c;
	scanf("%d", &t);
	int i=1;
	while (t--) {
		scanf("%d %d %d", &a, &b, &c);
		if (a<=20 && b<=20 && c<=20)
			printf("Case %d: good\n", i);
		else
			printf("Case %d: bad\n", i);
		i++;
	}


}

