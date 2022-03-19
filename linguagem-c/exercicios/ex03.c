#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main () {
    setlocale(LC_ALL, "Portuguese");
    system("cls");


    //Código mostra a tabuada de um número

    int num, cont; 

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);

    for (cont=1; cont<=9; cont++) 
    {
        printf("%d x %d = %d\n", num, cont, num * cont);
    }

    return 0;

    //Código mostra a média media entre os números 1 e 10

    int cont, Soma, media;

    Soma = 0;

    for (cont=1; cont<=10; cont++) {
        Soma=Soma+cont;
    }

    media = Soma/10;

    printf("A media dos numeros entre 1 e 10 = %d", media);

    return 0;

    
  //Código mostra qual número é o maior entre entre

  int cont,num,maior;

    maior = 0;

    for (cont=1; cont<=7; cont++) {
        printf ("Digite um numero: ");
        scanf("%d",&num);

    if (num > maior) {
        maior = num;
    }

   }
    
    printf ("O maior dos numeros lidos e: %d\n", maior); 
    
    return 0; 

}