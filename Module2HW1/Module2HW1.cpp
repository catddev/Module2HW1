#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("Введите номер задачи:");
	scanf("%d", &n);


	if (n == 1) {
		/* 1. Дано натуральное (целое неотрицательное) число, а и целое положительное число d.
		Вычислить частное q и остаток r при делении, а на d. */

		int a, d, q, r;
		printf("a=");
		scanf("%d", &a);
		printf("d=");
		scanf("%d", &d);

		q = a / d;

		if (a>=d) {
			r = (a%d);
			printf("частное: %d \nостаток при делении: %d\n", q, r);
		}
		else if (a<d) {
			q = 0;
			float a1, d1, r1;
			a1 = a;
			d1 = d;
			r1= a1 / d1;
			printf("частное: %d \nостаток при делении: %f\n", q, r1);
		}
	}
	else if (n == 2) {
		/* 2. Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y,
		если x равен 0, иначе 144/(x*y). */

		int x, y, f;
		scanf("%d %d", &x, &y);
		
		if (x == 0 && y == 0) {
			f = 0;
		}
		else if (y == 0) {
			f = 12 / x;
		}
		else if (x == 0) {
			f = 12 / y;
		}
		else {
			f = 144 / (x*y);
		}
		printf("%d\n", f);
		
	}
	else if (n == 3) {
		/* 3. Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x */

		int x, y, f;
		scanf("%d %d", &x, &y);

		if (x > y) {
			f = x - y;
		}
		else {
			f = y - x;
		}
		printf("%d\n", f);
	}
	else if (n == 4) {
		/* 4. Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x.
		Предполагается, что значения параметров больше нуля. */
		
		double x, y, F;
		scanf("%f %f", &x, &y);

		if (x > y) {
			F = x / y;
		}
		else {
			F = y / x;
		}
		printf("%f\n", F);
	}
	else if (n == 5) {
		/* 5. Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k,
		где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля */

		double x, y, z, m, n1, k, f;
		scanf("%f %f %f", &x, &y, &z);

		if (x < y && x < z) {
			k = x, m = y, n1 = z;
		}
		else if (y < x && y < z) {
			k = y, m = x, n1 = z;
		}
		else if (z < x && z < y) {
			k = z, m = x, n1 = y;
		}
		f = m*n1 / k;
		printf("%f\n", f);
	}
	else if (n == 6) {
		/* 6. Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c. */

		int a, b, c, f;
		scanf("%d %d %d", &a, &b, &c);
		if (a < b && a < c) {
			f = a;
		}
		else if (b < a && b < c) {
			f = b;
		}
		else if (c < a && c < b) {
			f = c;
		}
		printf("наименьшее значение из трех чисел: %d\n", f);
	}
	else if (n == 7) {
		/* 7. Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c. */

		int a, b, c, f;
		scanf("%d %d %d", &a, &b, &c);
		if (a > b && a > c) {
			f = a;
		}
		else if (b > a && b > c) {
			f = b;
		}
		else if (c > a && c > b) {
			f = c;
		}
		printf("наибольшее значение из трех чисел: %d\n", f);
	}
	else if (n == 8) {
		/* 8. Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х^2+у^2= z^2, иначе возвращает false. */

		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if (x*x + y*y == z*z) {
			printf("true\n");
		}
		else {
			printf("false\n");
		}
	}
	else if (n == 9) {
		/* 9. Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот,
		y делится нацело на x, иначе возвращает false. Предполагается, что значения параметров больше нуля. */

		int x, y;
		scanf("%d %d", &x, &y);
		if (x%y == 0 || y%x == 0) {
			printf("true\n");
		}
		else {
			printf("false\n");
		}
	}
	else if (n == 10) {
		/* 10. Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других.
		Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами треугольника,
		иначе возвращает false. Предполагается, что значения параметров больше нуля */

		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if (x>y && x>z && x<(y+z)) {
			printf("true\n");
		}
		else if (y>x && y>z && y<(x + z)) {
			printf("true\n");
		}
		else if (z>x && z>y && z<(x + y)) {
			printf("true\n");
		}
		else {
			printf("false\n");
		}
	}
	else {
		printf("нет заданий\n");
	}
}
	

