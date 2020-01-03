#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <sstream>
#include <assert.h>

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
	int n;
	stack<int> s;
	string str;
	int in, out;
	bool flag;
	while (scanf("%d\n", &n), n) {
		while (getline(cin, str), str.compare("0")) {
			stringstream ss(str);
			in = 1;
			flag = true;
			int i=0;
			printf("start\n");
			for (; i<n; i++) {
				ss >> out;
				while (in != out && in<=n) {
					s.push(in);
					printf("push %d to stack\n", in);
					in++;
				}
				if (in == out) {
					in++;
				}
				else break;
			}

			for (; i<n; i++) {
				if (!s.empty() && (s.top()==out)) {
					s.pop();
					printf("popped %d\n", out);
				}
				else {
					flag = false;
				}
				ss >> out;
			}

			if (flag)
				printf("Yes\n");
			else
				printf("No\n");

			while(!s.empty())
				s.pop();
		}
		printf("\n");
	}
}
