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

		if (a>d) {
			q = a / d;
			r = (a%d);
			printf("�������: %d \n������� ��� �������: %d\n", q, r);
		}
		else if (a<d) {

			printf("�������: %d \n������� ��� �������: %f\n", q, r);
		}
	}





	else {
		printf("��� �������\n");
	}
}
	

