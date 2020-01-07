#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d\n", &n);
	map<string, int> m;
	vector<string> names;
	string tree;
	int total;
	int i=0;
	while(i<n) {
		if (i>0)
			printf("\n");

		m.clear();
		names.clear();
		total = 0;
		while (getline(cin, tree), !tree.empty()) {
			total++;
			if (m.find(tree) == m.end()) {
				m.insert({tree, 1});
				names.push_back(tree);
			}
			else {
				m[tree]++;
			}

		}
		sort(names.begin(), names.end());	
		for (string name : names) {
		//	cout << t << " " << << endl;
			printf("%s %.4f\n", name.c_str(), (m[name]*100.0)/total);
		}

		i++;
	}
}
		
