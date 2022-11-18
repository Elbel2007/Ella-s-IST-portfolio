#include <stdio.h>

// ask the user for 3 integers
// use scanf("%i", varname);
// print out the sum of all 3 variables

int main() {
	int x, y, z;
	printf("enter the first number: ");
	scanf("%i", &x);
	printf("enter the second  number: ");
	scanf("%i", &y);
	printf("enter the third  number: ");
	scanf("%i", &z);
	printf("the sum of your numbers is %i/n", x + y + z );
	return 0;
}
