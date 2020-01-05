#include <iostream>

using namespace std;

int main() {
	int day_climb, night_slide, fatigue, height;
	double fatigue_factor,amount_climbed, curr_height;

	while (scanf("%d %d %d %d", &height, &day_climb,
				&night_slide, &fatigue),
			height != 0) {
		fatigue_factor = fatigue/100.0 * day_climb;
		int day = 1;
		curr_height = 0.0;
		while (1) {
			amount_climbed = day_climb-((day-1)*fatigue_factor);
			curr_height += amount_climbed>0 ? amount_climbed : 0;
			if (curr_height > height) {
				printf("success on day %d\n", day);
				break;
			}
			curr_height -= night_slide;
			if (curr_height < 0) {
				printf("failure on day %d\n", day);
				break;
			}
			day++;
		}
	}
}
