

#include <stdio.h>
#include <limits.h>
#include <time.h>


int rand(int, int, int, int);
// my implementation of the linear congruential Generator algorithm
int main(int argc, char **argv){
	int a = 1103515245;
	int b = 0;
	int m = INT_MAX;
	int seed = time(0);
	
	b = rand(a,b,m,seed);
	int curr = seed;

	for (int i = 0; i < 10; i++){

		curr = rand(a, b, m, curr);
		printf("%d\n", curr);
	}
}

int rand(int a, int b, int m, int curr){
	return a * curr + b % m;
}
