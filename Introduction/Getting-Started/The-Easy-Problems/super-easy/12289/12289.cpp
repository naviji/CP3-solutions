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
	int n;
	string s;

	scanf("%d\n", &n);
	while (n--) {
		cin >> s;
		if (s.length() == 5)
			printf("3");
		else {
			if ((s[1]=='w' && s[2]=='o')
			|| (s[0]=='t' && s[2]=='o')
			|| (s[0]=='t' && s[1]=='w'))
				printf("2");
			else
				printf("1");
		}
		printf("\n");
	}

}

