#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
	char c;
	list<char> l;
	list<char>::iterator itr = l.begin();
	while (scanf("%c", &c) != EOF) {
		if (c == '\n') {
			cout << string(l.begin(), l.end()) << endl;
			l.clear();
			itr = l.begin();
			continue;
		} 
		if (c == '[') {
			itr = l.begin();
		}
		else if (c == ']') {
			itr = l.end();
		}
		else {
			l.insert(itr, c);
		}
	}
}


