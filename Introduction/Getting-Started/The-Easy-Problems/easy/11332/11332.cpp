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

int f(int n) {
	int sum = 0;
	while (n) {
		sum += n%10;
		n = n/10;
	}
	return sum;
}

int main() {
	int n;
	while (scanf("%d", &n), n) {
		int fn = f(n);
		while (fn != f(fn))
			fn = f(fn);
		cout << fn << endl;
	}	

}

