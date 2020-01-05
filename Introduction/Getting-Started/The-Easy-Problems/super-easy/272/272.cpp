#include <bits/stdc++.h>

using namespace std;

int main() {
	char c;
	bool first = true;
	while (scanf("%c", &c) != EOF) {
		if (c == '\"' && first) {
			printf("``");
			first = !first;
		}
		else if (c == '\"' && !first) {
			printf("''");
			first = !first;
		}
		else
			printf("%c", c);
	}

}
