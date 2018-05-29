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
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);
		
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
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);

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
		
		double x, y, f;
		printf("x=");
		scanf("%lf", &x);
		printf("y=");
		scanf("%lf", &y);

		if (x > y) {
			f = x / y;
		}
		else {
			f = y / x;
		}
		printf("%lf\n", f);
	}

	else if (n == 5) {
		/* 5. �������� ������� double f(double x, double y, double z), ������� ���������� m*n/k,
		��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ���� */

		double x, y, z, f;
		printf("x=");
		scanf("%lf", &x);
		printf("y=");
		scanf("%lf", &y);
		printf("z=");
		scanf("%lf", &z);

		if (x < y && x < z) {
			f = y*z / x;
		}
		else if (y < x && y < z) {
			f = x*z / y;
		}
		else if (z < x && z < y) {
			f = x*y / z;
		}
		printf("%lf\n", f);
	}
	else if (n == 6) {
		/* 6. �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. */

		int a, b, c, f;
		printf("a=");
		scanf("%d", &a);
		printf("b=");
		scanf("%d", &b);
		printf("c=");
		scanf("%d", &c);
	
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
		printf("a=");
		scanf("%d", &a);
		printf("b=");
		scanf("%d", &b);
		printf("c=");
		scanf("%d", &c);
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
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);
		printf("z=");
		scanf("%d", &z);
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
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);
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
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);
		printf("z=");
		scanf("%d", &z);
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
	

