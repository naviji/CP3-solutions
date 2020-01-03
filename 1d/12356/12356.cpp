#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int soldiers, loss_reports;
	int i, l, r;
	int left_alive, right_alive;
	bool alive[1000010];
	while (scanf("%d %d\n", &soldiers, &loss_reports), (soldiers||loss_reports)) {
		memset(alive, true, sizeof(alive));	
		while (loss_reports--) {
			scanf("%d %d\n", &l, &r);
			//for (int i=l; i<=r; i++)
			//	alive[i] = false;

			i = l;
			while (alive[i] == true && i<=r) {
				alive[i] = false;
				i++;
			}
			
			i = r;
			while (alive[i] == true && i>=l) {
				alive[i] = false;
				i--;
			}

			while (!alive[l]) {
				l--;
			}

			if (l>=1) {
				printf("%d ", l);
			}
			else {
				printf("* ");
			}

			while (!alive[r]) {
				r++;
			}

			if (r<= soldiers) {
				printf("%d\n", r);
			}
			else {
				printf("*\n");
			}
		}
		printf("-\n");
	}
}




