#include <stdio.h>
#include <locale.h>
int task1() {
	setlocale(LC_CTYPE, "RUS");
	printf("123\n\n"); 
	printf("1\n2\n3\n\n");
	printf("1\n 2\n  3\n\n");
	printf("%d %2d %3d %4d", 1, 2, 3, 4);
	printf("%10.3f\n\n ", 12.234657);
	printf("%10.5f\n\n ", 12.234657);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("ѕроизведение %d на %d равно %d\n", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
}

int task2() {
	setlocale(LC_CTYPE, "RUS");
	int n, k, n1, k1, s, n2, k2;
	n = 14, k = 30, n1 = 5, k1 = 15, s = 37, n2 = 16, k2 = 45;
	printf("сейчас %d часов %d минут 00 секунд\n", n, k);
	printf("идЄт %d минута суток\n", k);
	printf("до полуначи осталось %d часов и %d минут\n", n1, k1);
	printf("c 8.00 прошло %d секунд\n", s);
	printf("текущий час = %1.2f суток и текуща€ минута = %1.2f часа\n", n2/24.0, k2/60.0);
}

int task3() {
	setlocale(LC_CTYPE, "RUS");
	int l, n, k, m;
	l = 1333.0, n = 3.0;
	printf("дано: %d делЄное на %d ответ: %3.5f\n", 3, 1333, 3 % 1333);
}

int main() {
	task3();
}