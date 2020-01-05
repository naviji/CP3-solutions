#include <iostream>

using namespace std;

int main() {
	int N, b, hotels, weeks;
	int price;
	int bed;
	int cheapest_price;
	bool within_budget, has_enough_beds;
	while (scanf("%d %d %d %d", &N, &b, &hotels, &weeks) != EOF) {
		cheapest_price = 2000000000;
		for (int i=0; i<hotels; i++) {	
			within_budget = false;
			has_enough_beds = false;
			scanf("%d", &price);
			if (price*N <= b) {
				within_budget = true;
			}
			for (int j=0; j<weeks; j++) {
				scanf("%d", &bed);
				if (bed >= N) {
					has_enough_beds = true;
				}
			}
			if (within_budget && has_enough_beds) {
				if (price*N < cheapest_price) {
					cheapest_price = price*N;
				}
			}
		}
		if (cheapest_price == 2000000000)
			printf("stay home\n");
		else printf("%d\n", cheapest_price);
	}
}
			
