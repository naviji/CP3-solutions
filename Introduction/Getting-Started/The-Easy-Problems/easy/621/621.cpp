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
	string s;
	scanf("%d\n", &n);
	while (n--) {
		cin >> s;
		if (s == "1" || s=="4" || s=="78")
			printf("+\n");
		else if (s[s.size()-2] == '3' &&
				s[s.size()-1] == '5')
			printf("-\n");
		else if (s[0] == '9' && s[s.size()-1] == '4')
			printf("*\n");
		else if (s[0]=='1' && s[1]=='9' && s[2]=='0')
			printf("?\n");
	}


}

