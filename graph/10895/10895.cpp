#include <vector>
#include <queue>
#include <iostream>
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>

using namespace std;

/*
int printAdjList(auto& AdjList) {
	int i = 0;
	for (auto vertex : AdjList) {
		printf("%d\n", i);
		for (auto pair : vertex) {
			printf("(%d %d) ", pair.first, pair.second);
		}
		printf("\n");
		i++;
	}
}
*/

int printOutput(vector<vii>& AdjList, int m, int n) {
	printf("%d %d\n", m, n);
	for (int i=1; i<AdjList.size(); i++) {
		int pairs = AdjList[i].size();
		if (pairs > 0) {
			printf("%d", pairs);
			for (int j=0; j<pairs; j++) {
				printf(" %d", AdjList[i][j].first);
			}
			printf("\n");

			printf("%d", AdjList[i][0].second);
			for (int j=1; j<pairs; j++) {
				printf(" %d", AdjList[i][j].second);
			}
			printf("\n");
		}
	}
}

int main() {
	vector<vii> AdjList;
	queue<int> q;
	int m, n, r, x, v;
	scanf("%d %d\n", &m, &n);
	v = 10010;
	AdjList.assign(v, vii());	
	for (int i=1; i<=m; i++) {
		scanf("%d\n", &r);
		for (int j=0; j<r; j++) {
			scanf("%d", &x);
			q.push(x);
		}
		for (int j=0; j<r; j++) {
			scanf("%d", &x);

			if (!q.empty()) {
				AdjList[q.front()].push_back({i, x});
				q.pop();
			}
		}
	}
	printOutput(AdjList, n, m);

	// print adj list
	//printAdjList(AdjList);
	/*vector<vii> AdjListT;
	AdjListT.assign(v+1, vii());

	for (int i=1; i<AdjList.size(); i++) {
		for (int j=0; j<AdjList[i].size(); j++) {
			int pindex = i;
			int weight = AdjList[i][j].second;
			int index = AdjList[i][j].first;
			AdjListT[index].push_back({pindex, weight});		
		}
	}

	//printf("Transposed\n");
	//printAdjList(AdjListT);*/

}
