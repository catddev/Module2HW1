#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("������� ����� ������:");
	scanf("%d", &n);


	if (n == 1) {

		/* 1. ���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d.
		��������� ������� q � ������� r ��� �������, � �� d. */

		int a, d, q, r;
		printf("a=");
		scanf("%d", &a);
		printf("d=");
		scanf("%d", &d);

		q = a / d;

		if (a>d) {
			r = (a%d);
			printf("�������: %d \n������� ��� �������: %d\n", q, r);
		}
		else if (a<d) {
			q = 0;
			float a1, d1, r1;
			a1 = a;
			d1 = d;
			r1= a1 / d1;
			printf("�������: %d \n������� ��� �������: %f\n", q, r1);
		}
	}





	else {
		printf("��� �������\n");
	}
}
	

