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
	int m;
       	double d, l, dep;
	int n;
	int month;

	double index[110];
	while (scanf("%d %lf %lf %d", &m, &d, &l, &n), m>=0) {
		for (int i=0; i<=m ;i++)
			index[i] = -1;
		while(n--) {
			scanf("%d %lf", &month, &dep);
			index[month] = dep;
		}
		
//		printf("0 %lf\n", index[0]);
		for (int i=1; i<=m; i++) {
			if (index[i] == -1)
				index[i] = index[i-1];
//			printf("%d %lf\n", i, index[i]);
		}
//		printf("\n");

		double pay = l/m;
		double owed = l+pay;
		double curr_val = (d+l);
		
		int i=0;
		while(i <= m) {
			curr_val *= (1.0-index[i]);
			owed -= pay;
//			printf("%d) curr_val = %lf owed=%lf\n",i, curr_val,owed);
			if (curr_val > owed) {
				if (i==1)
					printf("%d month\n", i);
				else
					printf("%d months\n", i);
				break;
			}
			i++;
		}
	}
}

