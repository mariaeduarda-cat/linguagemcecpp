#include <locale.h>
#include <stdio.h>

    /*int main () {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int a, b, c;
    a = 10;
    b = a + 1;
    c = b + 2;
    printf("Atualmente, temos a = %d, b = %d e c = %d.\n", a, b, c);

    char ch1, ch2, ch3, ch4, ch5;
    ch1 = 'E';
    ch2 = 'o';
    ch3 = 's';
    ch4 = 'z';
    ch5 = 'p';
    puts("%cu g%c%cto de %ciz%ca.\n", ch1, ch2, ch3, ch5, ch4);


   float a, b;
   a = 12.5;
   b = 10.7;
   printf("a = %.2f e b = %.2f\n", a, b);

   char escolha;
   escolha = 'b';
   escolha = escolha + 1;
   printf("O sucessor de b � a letra: %c.\n", escolha);


    int cadastrado, ativo, logado;
    char opcao;

    cadastrado = ativo = logado = 0;
    
    printf("Deseja cadastrar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        cadastrado = 1;
        printf("\nConta cadastrada. \n");
    }

    printf("Deseja ativar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        ativo = 1;
        printf("\nConta ativada. \n");
    }

    printf("Deseja logar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        logado = 1;
        printf("Conta logada. \n");
    }

    if((cadastrado == 1) && (ativo == 1) || (logado == 1)) {
        printf("\nSeja bem vindo.\n");
    } 
    else {
        printf("\nAlgo deu errado.\n");
    }

    float nota1, nota2, nota3, media, total;

    printf("Informe sua primeira nota:\n");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Informe sua segunda nota:\n");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("Informe sua terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    total = media;

    if(media >= 8) {
        printf("\nSua nota final foi de %.2f. \nPar�bens!!! Voc� foi aprovado.", total);
    }
    else {
        printf("SUa nota final foi de %.2f. \nInfelizmente voc� foi reprovado!", total);
    }

    int opcao;

    printf("Entre 1� para adicionar ou 2� para excluir: \n");
    scanf("%d", &opcao);

    if(opcao >= 0) {
        if (opcao == 0) {
            printf("\nN�mero nulo.\n");
        } else {
            printf("\nN�mero positivo.\n");
        }
    } else {
        printf("\nN�mero negativo.\n");
    }

    switch(opcao) {
        case 1: {
            printf("\nN�mero 1.\n");
            break;
        }
    
        case 2: {
            printf("\nN�mero 2.\n");
            break;
        }

        default: printf("\nOp��o inv�lida.\n");
    }

    printf("Final do programa");

   
   float media, nota1, nota2;

    printf("Informe sua primeira nota: \n");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Informe sua segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    if (media>=6) {
        printf("Par�bens, voc� est� aprovado!!");
    } 
    else 
        if (media >=4) {
            printf("Voc� est� em recupera��o");
        }
        else {
            printf("Voc� est� reprovado");
        }*/
