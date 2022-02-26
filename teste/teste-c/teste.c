#include <locale.h>
#include <stdio.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int a, b, c;
    a = 10;
    b = a + 1;
    c = b + 2;
    printf("Atualmente, temos a = %d, b = %d e c = %d.\n", a, b, c);


}