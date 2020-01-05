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


void f(string& prev, string& curr) {
	if (prev == "+x") {
		if (curr != "No")
			prev = curr;
	}
	else if (prev == "-x") {
		if (curr == "+x")
			prev = "-x";
		else if (curr == "-x")
			prev = "+x";
		else if (curr == "+y")
			prev = "-y";
		else if (curr == "-y")
			prev = "+y";
		else if (curr == "+z")
			prev = "-z";
		else if (curr == "-z")
			prev = "+z";
	}
	else if (prev == "+y") {
		/*if (curr == "+x" || curr == "-x" ||
				curr == "+z" || curr == "-z")
			prev = "+y";*/
		if (curr == "+y")
			prev = "-x";
		else if (curr == "-y")
			prev = "+x";
	}
	else if (prev == "-y") {
		if (curr == "+y")
			prev = "+x";
		else if (curr == "-y")
			prev = "-x";
	}
	else if (prev == "+z") {
		if (curr == "+z")
			prev = "-x";
		else if (curr == "-z")
			prev = "+x";
	} else if (prev == "-z") {
		if (curr == "+z")
			prev = "+x";
		else if (curr == "-z")
			prev = "-x";
	}
	/*else if (prev == "No") {
		prev = curr;
	}*/
}	


int main() {
	int l;
	while (scanf("%d\n", &l), l) {
		l--;
		string prev, curr;
		prev = "+x";
		while (l--) {
			cin >> curr;
			f(prev, curr);
		}
		cout << prev << endl;
	}

}

