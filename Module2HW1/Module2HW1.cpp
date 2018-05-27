#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("¬ведите номер задачи:");
	scanf("%d", &n);


	if (n == 1) {

		/* 1. ƒано натуральное (целое неотрицательное) число, а и целое положительное число d.
		¬ычислить частное q и остаток r при делении, а на d. */

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

		/* Ќапишите функцию int f(int x, int y), котора€ возвращает 0, если значени€ x и y оба равны нулю, 12/x, если y равен 0, 12/y,
		если x равен 0, иначе 144/(x*y). */


	}




	else {
		printf("нет заданий\n");
	}
}
	

