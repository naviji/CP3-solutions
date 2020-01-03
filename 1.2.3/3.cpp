#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> days{"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"};
	int d = 9;
	int m = 8;
	int y = 2010;
	cout << days[(d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7] << endl;
}
