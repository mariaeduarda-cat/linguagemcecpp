#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    int main () {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    /*float nota1, nota2, nota3, media;

    printf("Informe sua primeira nota: \n");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Informe sua segunda nota: \n");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("Informe sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nSua média é: %.2f.\n", media);

    if (media >= 7) {
        printf("\nParábens!! Você foi aprovado");
    } else {
        printf("\nInfelizmente, você foi repovado!!");
    }*/

    int num, cont; 

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    for (cont=1; cont<=9; cont++) 
    {
        printf("%d x %d = %d\n", num, cont, num * cont);
    }

    return 0;

    /*int cont, Soma, media;

    Soma = 0;

    for (cont=1; cont<=10; cont++) {
        Soma=Soma+cont;
    }

    media = Soma/10;

    printf("A média dos números entre 1 e 10 = %d", media);

    return 0;*/

    
    
   /* int cont,num,maior;

    maior = 0;

    for (cont=1;cont<=15;cont++) {
        printf ("Digite um número: ");
        scanf("%d",&num);

    if (num > maior) {
        maior = num;
    }

    }
    
    printf ("O maior dos números lidos é: %d\n", maior); 
    
    return 0;    */

}