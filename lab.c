#include <stdio.h>

int main() {
    int a; // довжина ребра куба

    // Отримуємо значення від користувача
    printf("Введіть довжину ребра куба: ");
    scanf("%d", &a);

    int V = a * a * a; // об'єм куба
    int S = 6 * a * a; // площа поверхні куба

    // Виводимо результати
    printf("V = %d\n", V);
    printf("S = %d\n", S);

    return 0;
}