#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


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

		if (a>=d) {
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
	else if (n == 2) {
		/* 2. �������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y,
		���� x ����� 0, ����� 144/(x*y). */

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
		/* 3. �������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x */

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
		/* 4. �������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x.
		��������������, ��� �������� ���������� ������ ����. */
		
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
		/* 5. �������� ������� double f(double x, double y, double z), ������� ���������� m*n/k,
		��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ���� */

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
		/* 6. �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. */

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
		printf("���������� �������� �� ���� �����: %d\n", f);
	}
	else if (n == 7) {
		/* 7. �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. */

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
		printf("���������� �������� �� ���� �����: %d\n", f);
	}
	else if (n == 8) {
		/* 8. �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �^2+�^2= z^2, ����� ���������� false. */

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
		/* 9. �������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������,
		y ������� ������ �� x, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����. */

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
		/* 10. ������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������.
		�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������,
		����� ���������� false. ��������������, ��� �������� ���������� ������ ���� */

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
		printf("��� �������\n");
	}
}
	

