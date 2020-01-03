#include <iostream>
#include <cstring>

using namespace std;

double find_compliance(int met, int req) {
	return (met*1.0)/req;
}

int main() {
	int requirements, proposals;
	string junk, candidate;
	string winner;
	double max_compliance, compliance;
	double min_price, price;
	int met;
	int i=1;
	while(scanf("%d %d\n", &requirements, &proposals),
			(requirements||proposals)) {
		if (i>1) printf("\n");	
		min_price = 2000000000;
		max_compliance = -1;	
		for (int i=0; i<requirements; i++) {
			getline(cin, junk);
		}

		for (int i=0; i<proposals; i++) {
			getline(cin, candidate);
			scanf("%lf %d\n", &price, &met);
			for (int j=0; j<met; j++) {
				getline(cin, junk);
			}
			compliance = find_compliance(met, requirements);
			if (compliance > max_compliance) {
				winner = candidate;
				max_compliance = compliance;
				min_price = price;
			}
			else if (compliance == max_compliance) {
				if (price < min_price) {
					winner = candidate;
					min_price = price;
				}
			}
		}
		printf("RFP #%d\n", i++);
		cout << winner << endl;
	}
}
	

