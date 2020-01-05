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
	string s;
	int i=1;
	while(cin >> s, s!="#") {
		if (s == "HELLO")
			printf("Case %d: ENGLISH\n", i);
		else if (s == "HOLA")
			printf("Case %d: SPANISH\n", i);
		else if (s == "HALLO")
			printf("Case %d: GERMAN\n", i);
		else if (s == "BONJOUR")
			printf("Case %d: FRENCH\n", i);
		else if (s == "CIAO")
			printf("Case %d: ITALIAN\n", i);
		else if (s == "ZDRAVSTVUJTE")
			printf("Case %d: RUSSIAN\n", i);
		else
			printf("Case %d: UNKNOWN\n", i);
		i++;
	}
}

