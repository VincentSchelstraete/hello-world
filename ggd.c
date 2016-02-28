#include <stdio.h>

void verwissel(int a, int b);



void verwissel(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}