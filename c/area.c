#include <stdio.h>

// ask the user for 3 integers
// use scanf("%i", varname);
// print out the sum of all 3 variables

int main() {
	int l, y, a;
	printf("enter the first number: ");
	scanf("%i", &l);
	printf("enter the second  number: ");
	scanf("%i", &y);
	a = l * y;
	printf("the are of your rectangle is %i\n", a );
	return 0;
}
