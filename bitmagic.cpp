#include <iostream>

using namespace std;

unsigned int smodn(unsigned int s, unsigned int n) {
	return (n-1) & s;
}
int main() {

	for (int i=4; i<=50; i++) {
		printf("%d mod 4 is %d\n", i, smodn(i, 4));
	}

}
