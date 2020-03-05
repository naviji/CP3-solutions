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
	int n, m;
	vector<int> v(1001);
	int c=0;
	while (scanf("%d", &n), n) {
		printf("Case %d:\n", ++c);

		v.clear();
		for (int i=0; i<n; i++)
			scanf("%d", &v[i]);
		//sort(v.begin(), v.end());
		
		scanf("%d", &m);
		int query;
		for (int i=0; i<m; i++) {
			scanf("%d", &query);
			int closest_sum = v[0]+v[1];
			for (int j=0; j<n; j++) {
				for (int k=j+1; k<n; k++) {
					int sum = v[j]+v[k];
//					printf("sum = %d v[%d]=%d v[%d]=%d\n", sum, j, v[j], k, v[k]);
					if (abs(sum-query) < abs(closest_sum-query)) {
						closest_sum=sum;
					}
				}
			}
			printf("Closest sum to %d is %d.\n", query, closest_sum);
		}
	}

		


}

