#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c,x1,x2,q;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (0 == a)
	{
		printf("Not quadratic equation\n");
	}
	else
	{
		q = b * b - 4 * a * c;
		if (0 == q)
		{
			x1 = -b + sqrt(q) / 2 * a;
			x2 = -b - sqrt(q) / 2 * a;
			printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
		}
		else if (q > 0)
		{
			x1 = -b + sqrt(q) / 2 * a;
			x2 = -b - sqrt(q) / 2 * a;
			printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
		}
		else if (q < 0)
		{
			double x = -b / (2 * a);
			double y = sqrt(-q) / (2 * a);
			printf("x1=%.2lf+%lfi;x2=%.2lf-%lfi", x, y, x, y);
		}
	}
	return 0;
}
