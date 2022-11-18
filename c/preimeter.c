#include <stdio.h>

// ask the user for 3 integers
// use scanf("%i", varname);
// print out the sum of all 3 variables

int main() {
	int l, w, p;
	printf("enter the first number: ");
	scanf("%i", &l);
	printf("enter the second  number: ");
	scanf("%i", &w);
	p = l * 2 + w * 2;
	printf("the preimeter of your rectangle is %i\n", p );
	return 0;
}
