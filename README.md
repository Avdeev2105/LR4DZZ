Алгоритм решения:
Начало.
Ввести номер рабочего места Анны — A.
Ввести номер рабочего места Бориса — B.
Вычислить чётность: ann = (A mod 2 = 0), bor = (B mod 2 = 0).
Проверить условие: чётности различаются?
Если да, включить кофе-машину, вывести «Кофе готовится».
Если нет, не включать, вывести «Кофе не готовится».
Конец.

Блок схема:

<img width="522" height="732" alt="image" src="https://github.com/user-attachments/assets/79d30cd6-c30b-44d2-b6e3-96c760af3f7a" />




Код на языке с: 

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include<locale.h>

int main() {

    int a, b;
    
    int condition;
    
    printf("***** КОФЕ-МАШИНА *****\n");
    
    printf("Введите номер рабочего места Анны : ");
    
    scanf("%d", &a);
    
    printf("Введите номер рабочего места Бориса : ");
    
    scanf("%d", &b);
    
    condition = (a % 2 != b % 2);
    
    printf("%s\n", condition ? "Кофе готовится" : "Кофе не готовится");
    
    return 0
    
}
