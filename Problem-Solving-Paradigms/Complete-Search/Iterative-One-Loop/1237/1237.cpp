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
	int TC, n, q;
	string s;
	int low, high, amount;
	pair<string, pair<int, int>> arr[10002];

	scanf("%d\n", &TC);
	while (TC--) {
		scanf("%d\n", &n);
		for (int i=0; i<n; i++) {
			cin >> s >> low >> high;
//			cout << s << " " << low << " " << high << endl;
			arr[i] = {s, {low, high}};
		}
		scanf("%d\n", &q);
		while (q--) {
			scanf("%d\n", &amount);
			bool found = false;
			string name;
			bool undetermined = false;
			for (int i=0; i<n; i++) {
				if (arr[i].second.first <= amount
						&&
					arr[i].second.second >= amount
				) {
					if (!found) {
						found = true;
						name = arr[i].first;
					}
					else {
						undetermined = true;
						break;
					}
				}
			}

			if (undetermined || !found)
				printf("UNDETERMINED\n");
			else 
				printf("%s\n", name.c_str());
		}
		if (TC)
			printf("\n");
	}

}

