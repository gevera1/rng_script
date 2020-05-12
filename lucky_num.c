#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef unsigned int uint; 

int gen_avg(uint i) {
	srand(time(NULL));
	int d4 = rand()%3 + 1;
	int d6 = rand()%5 + 1;
	int d8 = rand()%7 + 1;
	int d10 = rand()%10;
	int d12 = rand()%11 + 1;
	int d20 = rand()%19 + 1;
	int d100 = (rand()%10)*10;
	int s = d4 + d6 + d8 + d10 + d12 + d20 + d100;
	return s;
}

int main() {
	int sum = 0;
	int lucky = 0;
	for (uint i = 0; i < 250; i++) {
		sum += gen_avg(i);
	}
	lucky = sum/250;
	printf("%d\n", lucky);
	return lucky;
}
