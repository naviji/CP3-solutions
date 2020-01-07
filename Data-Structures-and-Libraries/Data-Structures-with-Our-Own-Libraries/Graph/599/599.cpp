#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <bitset>
#include <sstream>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<k; i++)
#define FORD(i,j,k) for(int i=j; i>=k; i--)
#define ll long long
#define pii pair<int, int>
#define vi vector<int >
#define pb push_back
#define REP(i,n) FOR(i,0,n)
#define ld long double
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;
const ld EPS = 10e-9;

int main() {
	int n, e, v, a;
	char c;
	scanf("%d\n", &n);
	while (n--) {
		bitset<26> s;
		string str;
		v = 0;
		e = 0;
		a = 0;
		while(cin >> str) {
			if (str[0] == '*')
				break;
//			cout << str << endl;
			e++;
//			cout << str[1] << " " << str[3] << endl;
			s.set(str[1]-'A');
			s.set(str[3]-'A');
		}
		cin.ignore();
		getline(cin, str);
		stringstream ss(str);
		while (ss >> c) {
//			cout << c << endl;
			v++;
			if (!s[c-'A'])
				a++;
			ss.ignore();
		}

		printf("There are %d tree(s) and %d acorn(s).\n",
				v-e-a, a);
	}
}

