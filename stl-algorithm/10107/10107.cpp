#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
	vector<int> v;
	int x;
	int median;
	while (scanf("%d\n", &x) != EOF) {
		v.push_back(x);
		nth_element(v.begin(), v.begin() + v.size()/2, v.end());
		median = v[v.size()/2];
		if (v.size()%2 == 1)
			cout << median << endl;		
		else {	
			nth_element(v.begin(), v.begin() + v.size()/2 -1, v.end());
			cout << (v[v.size()/2 - 1] + median)/2<< endl;
		}
	}
}
