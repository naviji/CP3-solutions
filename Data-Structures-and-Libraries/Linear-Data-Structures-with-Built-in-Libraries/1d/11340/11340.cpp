#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int tests, characters, lines;
	int price[256];
	char c;
	int cents,total_cents;
	double dollars;
	scanf("%d\n", &tests);
	while (tests--) {
		total_cents = 0;
		memset(price, 0, sizeof(price));
		scanf("%d\n", &characters);
		while(characters--) {
			scanf("%c %d\n", &c, &cents);
			price[c] = cents;
		}
		scanf("%d\n", &lines);
		int new_lines = 0;
		while (scanf("%c", &c) != EOF) {
			total_cents += price[c];
			if (c == '\n') {
				new_lines++;
				if (new_lines >= lines)
					break;
			}
		}

		dollars = (total_cents*1.0)/100;
		printf("%.2lf$\n", dollars);
	}
}



