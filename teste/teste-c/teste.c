#include <locale.h>
#include <stdio.h>

void main () {
    setlocale(LC_ALL, "Portuguese");

    /*int a, b, c;
    a = 10;
    b = a + 1;
    c = b + 2;
    printf("Atualmente, temos a = %d, b = %d e c = %d.\n", a, b, c);*/

    /*char ch1, ch2, ch3, ch4, ch5;
    ch1 = 'E';
    ch2 = 'o';
    ch3 = 's';
    ch4 = 'z';
    ch5 = 'p';
    puts("%cu g%c%cto de %ciz%ca.\n", ch1, ch2, ch3, ch5, ch4 );*/


   /*float a, b;
   a = 12.5;
   b = 10.7;
   printf("a = %.2f e b = %.2f\n", a, b);*/

   /*char escolha;
   escolha = 'b';
   escolha = escolha + 1;
   printf("O sucessor de b é a letra: %c.\n", escolha);*/


    char inicial;
    int idade;
    printf(?Entre com a sua idade e a sua inicial:\n?);
    scanf(?%d?, &idade);
    scanf(?%c?, &inicial);
    printf(?Voce tem %d anos e seu nome comeca com %c\n?, idade, inicial);
    

}