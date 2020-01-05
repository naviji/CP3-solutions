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
	int t;
	char c;
	scanf("%d\n", &t);
	int z=1;
	while (z <= t) {
		vi v(101, 0);
		int p = 0;
		while (scanf("%c", &c), c!='\n') {
			if (c == '>')
				p = (p+1)%100;
			else if (c == '<')
				p = (p-1+100)%100;
			else if (c == '+')
				v[p] = (v[p]+1)%256;
			else if (c == '-')
				v[p] = (v[p]-1+256)%256;
		}
		printf("Case %d:", z);
		for (int i=0; i<100; i++) {
			printf(" %02X", v[i]);
		}
		printf("\n");
		z++;
	}
}

