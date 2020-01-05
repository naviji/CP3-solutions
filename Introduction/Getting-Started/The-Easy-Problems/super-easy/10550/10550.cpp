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
	
	int s, a, b, c;
	while (scanf("%d %d %d %d\n", &s, &a, &b, &c),
			a||b||c||s) {
		int d = 0;
		d += (s<a) ? (s+40-a) : (s-a);
		d += (b<a) ? (b+40-a) : (b-a);
		d += (b<c) ? (b+40-c) : (b-c);
		printf("%d\n", d*9 + (360*3));
	}

}

