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
	int a, b;
	while (scanf("%d %d", &a, &b), a!=-1 || b!=-1) {
		printf("%d\n", min((a<b) ? (a+100-b): a-b, 
					(b<a) ? (b+100-a): b-a));
	}

}

