#include <stdio.h>

int main()
{
	printf("please enter your feet and inch ,"
		"eg\"5 7\"named 5 feet 7 inchs:");

	double foot;
	double inch;

	scanf("%lf %lf", &foot, &inch);

	printf("taller %f meeter.\n", 
		((foot + inch / 12) * 0.3048));

	return 0;
}