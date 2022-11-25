#include <stdio.h>
int main()
{
	double a, b, x;
	//ввод исходных данных
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("x = ");
	scanf("%lf", &x);
	if (a * b < x) //если произведение меньше х
	{
		//¬ыведите произведение параметров a, b
		printf("(a * b)/x = %lf\n", (a * b) / x);
	}//и разность иначе
	else if (a * b > x)
	{
		printf("a - b = %lf\n", a - b);
	}
	else
	{//¬ случае равенства выведите соответствующее сообщение
		printf("a*b equal x\n");
	}
	getchar();
	getchar();
	return 0;
}

#include <stdio.h>
#include <math.h>
int
main()
{
	float a, b, c;
	printf("Enter a ->");
	scanf("%f", &a);
	printf("Enter b ->");
	scanf("%f", &b);
	printf("Enter c ->");
	scanf("%f", &c);
	if (!a && !b && !c)
		return 0;
	float x = 1.0f;
	printf("f(x) = ");
	if (a)
		printf("%f*x^2", a);
	if (b)
		a ? printf("%+f*x", b) : printf("%fx", b);
	if (c)
		a || b ? printf("%+f", c) : printf("%f", c);
	printf("\n");
	float f_x = a * x * x + b * x + c;
	float f_minus_x = a * -x * -x + b * -x + c;
	if (f_x == f_minus_x)
		printf("Function is even: f(x)=%f=f(-x)=%f\n", f_x, f_minus_x);
	else if (f_minus_x == -f_x)
		printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_minus_x, -f_x);
	else
		printf("Function is neither even nor odd: (f(x) = %f) != (f(-x) = %f) != (-f(x) = %f\n)", f_x, f_minus_x, -f_x);
	if (a)
	{
		float vx = -b / (2.0f * a);
		float vy = a * vx * vx + b * vx + c;
		printf("Vertex (%f,%f) is a ", vx, vy);
		a > 0.0f ? printf("minimum") : printf("maximum");
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	double a, b, x;
	//ввод исходных данных
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("x = ");
	scanf("%lf", &x);
	if (a * b < x) //если произведение меньше х
	{
		//¬ыведите произведение параметров a, b
		printf("(a * b)/x = %lf\n", (a * b) / x);
	}//и разность иначе
	else if (a * b > x)
	{
		printf("a - b = %lf\n", a - b);
	}
	else
	{//¬ случае равенства выведите соответствующее сообщение
		printf("a*b equal x\n");
	}
	getchar();
	getchar();
	return 0;
}

#include <stdio.h>
#include <math.h>
int
main()
{
	float a, b, c;
	printf("Enter a ->");
	scanf("%f", &a);
	printf("Enter b ->");
	scanf("%f", &b);
	printf("Enter c ->");
	scanf("%f", &c);
	if (!a && !b && !c)
		return 0;
	float x = 1.0f;
	printf("f(x) = ");
	if (a)
		printf("%f*x^2", a);
	if (b)
		a ? printf("%+f*x", b) : printf("%fx", b);
	if (c)
		a || b ? printf("%+f", c) : printf("%f", c);
	printf("\n");
	float f_x = a * x * x + b * x + c;
	float f_minus_x = a * -x * -x + b * -x + c;
	if (f_x == f_minus_x)
		printf("Function is even: f(x)=%f=f(-x)=%f\n", f_x, f_minus_x);
	else if (f_minus_x == -f_x)
		printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_minus_x, -f_x);
	else
		printf("Function is neither even nor odd: (f(x) = %f) != (f(-x) = %f) != (-f(x) = %f\n)", f_x, f_minus_x, -f_x);
	if (a)
	{
		float vx = -b / (2.0f * a);
		float vy = a * vx * vx + b * vx + c;
		printf("Vertex (%f,%f) is a ", vx, vy);
		a > 0.0f ? printf("minimum") : printf("maximum");
		printf("\n");
	}
	return 0;
}
