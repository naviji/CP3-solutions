#include <iostream>
#include <bitset>

#define MAX_SIZE 1000000

using namespace std;

bool can_fill(bitset<MAX_SIZE>& b, int s, int e) {
	for (int i=s; i<e; i++) {
		if (b[i])
			return false;
		b.set(i);
	}
	return true;
}

bool can_fill(bitset<MAX_SIZE>& b, int s, int e, int r) {
	for (int i=0; (e+i)<=b.size(); i+=r) {
		if(!can_fill(b, s+i, e+i))
			return false;
	}
	return true;
}


int main() {
	int n, m;
	bitset<MAX_SIZE> time_slot;
	int start, end, interval;
	bool conflict;
	while (scanf("%d %d\n", &n, &m), n||m) {
		time_slot.reset();
		conflict = false;
		for (int i=0; i<n; i++) {
			scanf("%d %d\n", &start, &end);
			if (!can_fill(time_slot, start, end)) {
				conflict = true;
			}
		}

		for (int i=0; i<m; i++) {
			scanf("%d %d %d\n", &start, &end, &interval);
			if (!can_fill(time_slot, start, end, interval)) {
			       conflict = true;
			}
		}

		if (!conflict) {
			printf("NO CONFLICT\n");
		}
		else {
			printf("CONFLICT\n");
		}		

	}
}	

