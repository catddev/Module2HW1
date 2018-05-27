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

		if (a>d) {
			q = a / d;
			r = (a%d);
			printf("частное: %d \nостаток при делении: %d\n", q, r);
		}
		else if (a<d) {

			printf("частное: %d \nостаток при делении: %f\n", q, r);
		}
	}





	else {
		printf("нет заданий\n");
	}
}
	

