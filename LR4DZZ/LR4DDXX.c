#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main(void) {
	setlocale(LC_ALL, "RUS");
	int a, b,prov;
	printf("Введите номер первого рабочего места :");
	scanf("%d", &a);
	printf("Введите номер второго рабочего места :");
	scanf("%d", &b);
	prov = ((a % 2==0 && b % 2!=0) || (a % 2 != 0 && b % 2 == 0));
	
	printf("Пьем кофе (1 - да, 0 - нет): %d\n", prov);
	return 0;
}
