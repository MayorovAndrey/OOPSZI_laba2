#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double f(double x);
bool isInArea(double x, double y);

int main()
{
	double x, y;
	int i;
	while (true)
	{
		printf("\nVvedite 1 ili 2 dlya vybora zadaniya\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
		{
			printf("Vvedite x=");
			scanf("%lf", &x);
			printf("Vvedite y=");
			scanf("%lf", &y);
			isInArea(x, y);
			printf("%o", isInArea(x, y));
			break;
		}
		case 2:
		{
			printf("Vvedite x=");
			scanf("%lf", &x);
			f(x);
			printf("%.3lf", f(x));
			break;
		}
		default:
			printf("neverny vvod");
		}

	}
	return 0;
}
bool isInArea(double x, double y)
{
	if ((x >= -1 && x <= 1) && (y >= 0 && y <= 1))
		return true;
	else if ((y >= -1 && y <= 0) && (y >= -sqrt(1 - x * x)))
		return true;
	else
		return false;
}

double f(double x)
{
	if (x <= 3)
		return x * x - 3 * x + 9;
	else
		return 1 / (x*x*x + 6);
}