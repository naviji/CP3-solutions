#include <iostream>

using namespace std;

int find_potency(int n, int* weights, int corner) {
	int result = 0;
	for (int i=0; i<n; i++) {
		result += weights[corner^(1<<i)];
	}
	return result;	
}

int find_max_pair(int n, int* potency, int corner) {
	int pair_potency = 0;
	int new_potency;
	int curr_potency = potency[corner];
	for (int i=0; i<n; i++) {
		new_potency = curr_potency+potency[corner^(1<<i)];
		if (pair_potency < new_potency)
			pair_potency = new_potency;
	}
	return pair_potency;
}

int main() {
	int n;
	int weights[1<<15];
	int potency[1<<15];
	int max_potency;
	int value;

	while (scanf("%d", &n) != EOF) {
		
		for (int i=0; i<(1<<n); i++) {
			scanf("%d", &weights[i]);
		}

		for (int i=0; i<(1<<n); i++) {
			potency[i] =  find_potency(n, weights, i);
		}
		
		max_potency = 0;
		for (int i=0; i<(1<<n); i++) {
			value = find_max_pair(n, potency, i);
			if (value > max_potency)
				max_potency = value;
		}

		printf("%d\n", max_potency);
	}

}

