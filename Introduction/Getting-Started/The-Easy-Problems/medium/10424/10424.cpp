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
	int sum=0;
	while (n) {
		sum += n%10;
		n = n/10;
	}
	return sum;
}

int sum(string& a) {
	int asum = 0;
	for (const char c : a) {
		if (c >= 'A' && c <= 'Z') {
			asum += (c-'A'+1);
		}
		if (c >= 'a' && c <= 'z') {
			asum += (c-'a'+1);
		}
	}
	return asum;
}

int g(int n) {
	while (n != f(n)) {
		n = f(n);
	}
	return n;
}

int main() {
	string a, b;
	while (getline(cin, a)) {
		getline(cin, b);
//		cout << a << " " << b << endl;
		int asum = sum(a);
		int bsum = sum(b);
		
		int av = g(asum);
		int bv = g(bsum);
		
		printf("%.2lf %%\n", (min(av,bv)*100.0)/(max(av, bv)));

	}

}

