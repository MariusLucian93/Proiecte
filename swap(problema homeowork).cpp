#include<stdio.h>

void swap_prin_valoare(int a, int b) {
	int aux = a;
	a = b;
	b = aux;
}

void swap(int* a, int* b) {
	int aux = *a;
	a = b;
	*b = aux;
}


void main() {
	int x = 7;
	int y = -2;

	swap_prin_valoare(x, y);

	printf("x=%d,y=%d(nu s-a facut swap)\n", x, y);

	swap(&x, &y);

	printf("x=%d,y=%d(s-a facut swap)\n", x, y);
}