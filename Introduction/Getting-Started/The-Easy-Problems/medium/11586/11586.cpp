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
	char c;
	scanf("%d\n", &n);
	while (n--) {
		int m=0;
		int f=0;
		while (scanf("%c", &c), c!='\n') {
			if (c == 'M')
				m++;
			if (c == 'F')
				f++;
		}

		if (m==f && !(m==1 && f==1))
			printf("LOOP\n");
		else
			printf("NO LOOP\n");
	}


}

