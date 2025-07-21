#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	printf("5 xonali son kiriting: ");
	scanf("%d", &a);

	b = a % 10;
	a /= 10;
	c = a % 10;
	a /= 10;
	d = a % 10;
	a /= 10;
	e = a % 10;
	a /= 10;
	f = a % 10;

	printf("%d\n", f);

	printf("%d\n", e);
	printf("%d\n", d);
	printf("%d\n", c);
	printf("%d\n", b);



	printf("Hello World\n");

	// buni boshqacha qisqaroq qilib yozish ham mumkun!

	int son, onMin, min, yuz, on, bir;

	printf("5 xonali so kiriting: ");
	scanf("%d", &son);
	onMin = son / 10000;
	min = (son % 10000) / 1000;
	yuz = (son % 1000) / 100;
	on = (son % 100) / 10;
	bir = son % 10;
	printf("%d %d %d %d %d", onMin, min, yuz, on, bir);

	return 0;
}
