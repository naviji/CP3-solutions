#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
	string s;
	while (getline(cin, s), s.compare("#")!=0) {
		if (next_permutation(s.begin(), s.end()))
			cout << s << endl;
		else
			cout << "No Successor" << endl;
		
	}
}
