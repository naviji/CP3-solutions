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
	int n, x;
	scanf("%d", &n);

	int first, second;
	printf("Lumberjacks:\n");
	while (n--) {
		bool ordered = true;
		scanf("%d", &first);
		scanf("%d", &second);
		int diff = first-second;
		first = second;
		for(int i=0; i<8; i++) {
			scanf("%d", &second);
			if (diff<0 && (first-second)>0)
			      ordered = false;
			if (diff>0 && (first-second)<0)
				ordered = false;
			first = second;
		}
		if (ordered)
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
		
}

