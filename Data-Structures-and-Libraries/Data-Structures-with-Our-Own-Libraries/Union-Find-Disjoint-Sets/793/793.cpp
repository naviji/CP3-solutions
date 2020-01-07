#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>
#include <sstream>

using namespace std;

#define ll long long
#define ld long double
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii> 
#define pb push_back
const int INF = 1000000009;
const ld EPS = 10e-9;

class UnionFind {
	private:
		vi p, rank;
	public:
		UnionFind(int N) {
			rank.assign(N, 0);
			p.assign(N, 0);
			for (int i=0; i<N; i++)
				p[i] = i;
		}

		int findSet(int i) {
			return (p[i] == i) ? i : (p[i] = findSet(p[i]));
		}

		bool isSameSet(int i, int j) {
			return findSet(i) == findSet(j);
		}

		void unionSet(int i, int j) {
			if (!isSameSet(i, j)) {
				int x = findSet(i);
				int y = findSet(j);

				if (rank[x] > rank[y])
					p[y] = x;
				else {
					p[x] = y;
					if (rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
};

int main() {
	int t, n, c1, c2;
	char c;
	scanf("%d\n\n", &t);
	string str;
	int i=0;
	while (i<t) {
		if (i++>0)
			printf("\n");
		int s=0, f=0;
		scanf("%d\n", &n);
		UnionFind uf(n+2);
		while (getline(cin, str), !str.empty()) {
			stringstream ss(str);
			ss >> c >> c1 >> c2;
			if (c == 'c')
				uf.unionSet(c1, c2);
			if (c == 'q')
				if (uf.isSameSet(c1, c2))
					s++;
				else
					f++;
		}
		printf("%d,%d\n", s, f);
	}
}
