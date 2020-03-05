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
	int k, x;
	vi v;
	int i=0;
	while (scanf("%d", &k), k) {
		if (i++)
			printf("\n");

		v.clear();
		for (int i=0; i<k; i++) {
			scanf("%d", &x);
			v.pb(x);
		}

		sort(v.begin(), v.end());
	
		int a, b, c, d, e, f;
		for (a=0; a<k; a++)
			for (b=a+1; b<k; b++)
				for (c=b+1; c<k; c++)
					for (d=c+1; d<k; d++)
						for (e=d+1; e<k; e++)
							for (f=e+1; f<k; f++) 
								printf("%d %d %d %d %d %d\n", v[a], v[b], v[c], v[d], v[e], v[f]);
	}		
}

