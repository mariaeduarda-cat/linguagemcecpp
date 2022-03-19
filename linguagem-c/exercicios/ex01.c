#include <stdio.h>
#include <stdlib.h>

    int main () {
    system("cls");

    int a, b, c;
    a = 10;           //Código que soma os caracteres;
    b = a + 1;
    c = b + 2;
    printf("Atualmente, temos a = %d, b = %d e c = %d.\n", a, b, c);

    char ch1, ch2, ch3, ch4, ch5;
    ch1 = 'E';
    ch2 = 'o';
    ch3 = 's';      //Podemos substituir as letras pelo %c na ordem; que queremos 
    ch4 = 'z';
    ch5 = 'p';
    printf("%cu g%c%cto de %ciz%ca.\n", ch1, ch2, ch3, ch5, ch4);


    float a, b;
    a = 12.5;        //Mostra na tela os números que estao nas variáveis;
    b = 10.7;
    printf("a = %.2f e b = %.2f\n", a, b);

    char escolha; 
    escolha = 'b';        //Soma 1 ao caractere b, resultado = c;
    escolha = escolha + 1;
    printf("O sucessor de b e a letra: %c.\n", escolha); 

    //Código abaixo nos mostra o uso do switch para menu de opções;

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

    if((cadastrado == 1) && (ativo == 1) && (logado == 1)) {
    printf("\nSeja bem vindo.\n");
    } 
    else {
    printf("\nAlgo deu errado.\n");
    }

    //Código mostra média aritmética;

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
    printf("\nSua nota final foi de %.2f. \nParabens!!! Voce foi aprovado.", total);
    }
    else {
    printf("SUa nota final foi de %.2f. \nInfelizmente voce foi reprovado!", total);
    }

    //Código mostra caso de Estrutura de Decisão Composta com Switch;

    int opcao;
    printf("Entre com 1 para adicionar ou 2 para excluir: \n");
    scanf("%d", &opcao);

    if(opcao >= 0) {
    if (opcao == 0) {
        printf("\nNumero nulo.\n");
    } else {
        printf("\nNumero positivo.\n");
    }

    } else {
    printf("\nNumero negativo.\n");
    }

    switch(opcao) {
    case 1: {
        printf("\nNumero 1.\n");
        break;
    }

    case 2: {
        printf("\nNumero 2.\n");
        break;
    }

    default: printf("\nOpcao invalida.\n");
    }

    printf("Final do programa");

    //Código mostra Estrutura de Decisão Aninhada com Média;

    float media, nota1, nota2;

    printf("Informe sua primeira nota: \n");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Informe sua segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    if (media>=6) {
    printf("Parabens, voce esta aprovado!!");
    } 
    else if (media >=4) {
        printf("Voce esta em recuperacao");
    }
    else {
        printf("Voce esta reprovado");
    }


}