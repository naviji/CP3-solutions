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
	vector<string> names(110);
	vector<string> song{"Happy", "birthday", "to", "you", "Happy",
		"birthday", "to", "you", "Happy", "birthday", "to", "Rujia",
		"Happy", "birthday", "to", "you"};

	scanf("%d\n", &n);
	for (int i=0; i<n; i++) {
		cin >> s;
		names[i] = s;
	}

	bool sung_once = false;
	int i=0;
	int j=0;
	while (1) {
		if (i==n-1)
			sung_once = true;
		printf("%s: %s\n", names[i].c_str(), song[j].c_str());
		if (sung_once && (j == 15))
			break;
		i = (i+1)%n;
		j = (j+1)%16;
	}

}

