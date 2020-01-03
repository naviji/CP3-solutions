#include <bits/stdc++.h>

using namespace std;


int main() {
	int total_months, numrec, idx;
        double dp, bl, val;
	double carValue, amount_owed;
	double all_rates[100];
	while(scanf("%d %lf %lf %d",&total_months, &dp, &bl, &numrec),
			total_months >= 0) {
		for (int i=0; i<total_months; i++)
			all_rates[i] = -1;	
		
		for (int i=0; i<numrec; i++) {
			scanf("%d %lf", &idx, &val);
			all_rates[idx] = val;
		}

		
		for (int i=0; i<total_months; i++) {
			if (all_rates[i] == -1) 
				all_rates[i] = all_rates[i-1];
		}

/*		for (int i=0; i<total_months; i++) {
			printf("%lf ", all_rates[i]);
		}
		printf("\n");
		*/
		carValue = dp+bl;
		amount_owed = bl+dp;	
		for (int i=0; i<total_months; i++) {
			carValue = carValue * (1-all_rates[i]);
			amount_owed -= dp;
			printf("month %d: Car value=%lf owed_amount=%lf rate=%lf\n", i, carValue, amount_owed, all_rates[i]);
			if (carValue >= amount_owed) {
				printf("%d months\n", i);
				break;
			}
		}
	}
}

			
