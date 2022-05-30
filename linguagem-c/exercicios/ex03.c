#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main () {
    system("cls");

    //Código mostra a tabuada de um número;

   int num, cont; 

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);

    for (cont=1; cont<=9; cont++) 
    {
        printf("%d x %d = %d\n", num, cont, num * cont);
    }

    return 0;

    //Código mostra a média entre os números 1 e 10;

    int cont, Soma, media;

    Soma = 0;

    for (cont=1; cont<=10; cont++) {
        Soma=Soma+cont;
    }

    media = Soma/10;

    printf("A media dos numeros entre 1 e 10 = %d", media);

    return 0; 
    
  //Código mostra qual número é o maior entre entres;

  int cont, num, maior;

    maior = 0;

    for (cont=1; cont<=7; cont++) {
        printf ("Digite um numero: ");
        scanf("%d", &num);

    if (num > maior) {
        maior = num;
    }

   }
    
    printf ("O maior dos numeros lidos e: %d\n", maior); 
    
    return 0;

    //Código lê qualquer número menos o zero;

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num!=0)
    {
        printf("O numero lido foi = %d\n", num);
        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    //Código mostra média de alunos com uso do WHILE;
    
    float nota1, nota2, nota3, media;
    int contalunos;

    contalunos = 1;
    while (contalunos=1)
    {
        printf("Entre com a nota 1 do aluno: ");
        scanf("%f",&nota1);
        fflush(stdin);

        printf("Entre com a nota 2 do aluno: ");
        scanf("%f",&nota2);
        fflush(stdin);

        printf("Entre com a nota 3 do aluno: ");
        scanf("%f",&nota3);
        fflush(stdin);

    media= (nota1 + nota2 + nota3) / 3;

    if (media>=7) 
        printf("APROVADO com media %.2f \n\n", media);
    else
        printf("REPROVADO com media %.2f \n\n", media);

        contalunos++;
    }

    return 0; 

    // Código mostra quantas vogais tem em uma palavra;

        char letra; 
        int conta=0, conte=0, conti=0, conto=0, contu=0;

        printf("Digite uma letra minuscula (a..z) a cada linha com . no final e tecle ENTER: \n");
        scanf("%c", &letra);

        while (letra!='.') {
        
        switch (letra) {
            case 'a':
                conta++;
                break;
            case 'e':
                conte++;
                break;
            case 'i':
                conti++;
                break;
            case 'o':
                conto++;
                break;
            case 'u':
                contu++;
                break;
        }
         scanf("%c", &letra);    
        }

        printf("Total de a: %d \n", conta);
        printf("Total de e: %d \n", conte);
        printf("Total de i: %d \n", conti);
        printf("Total de o: %d \n", conto);
        printf("Total de u: %d \n", contu);

        return 0; 

        //Mesmo código que lê qualquer número menos o zero, porém feito com DO WHILE;

        int num;

        do {
            printf("Digite um numero: ");
            scanf("%d", &num);
            if (num !=0)
            {
               printf("O numero lido foi = %d\n", num);
            }
        } while (num!=0); 

        //Código mostra o antecessor e sucessor com DO WHILE;
         
    int num;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num%2 ==0) {
            printf("O sucessor %d\n", num + 1);
        } else {
            printf("O antecessor %d\n", num - 1);
        }
        
    } while (num!=0 && num!=9);

    int vet[5];
    vet [0] = 8;
    vet [1] = 10;
    vet [3] = 90;
    vet [4] = 19;
    vet [5] = 4; 

    vet [4] = 28;
    vet [2] = 56; 


    printf("A posicao 2 e 4 do vetor e: %d, %d", vet[2], vet[4]);

    scanf("%d", &vet[5]);
    printf("O valor e: %d", vet[5]);

    scanf("%d", &num);
    vet[3] = num; 
    
    printf("O valor do indice 3 e: %d", vet[3]);

    printf("Posicao 6 do vetor: %d", vet[6]);

    vet[6] = 900;
    scanf("%d", &vet[6]);

    
    char cadeia[11] = {'a', 'l', 'g', 'o', 'r', 'i', 't', 'm', 'o', 's'};

    printf("%s", cadeia);

    char nome[8];
    int ind;

    scanf("%s", nome);

    for (ind=8; ind>=0; ind--){
        printf("%c", nome[ind]);
    }
    

    int num[10], cont;

    for (cont=9; cont>=0; cont--) {
        printf("%d \n", num[cont]);
    }

    return 0;
    
    


}