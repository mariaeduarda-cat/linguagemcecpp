#include <stdio.h>
#include <locale.h>

    int main (int agrc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    /*char sexo;
    printf("Qual ð o seu sexo? (f/m).\n");
    scanf("%c", &sexo);

    if(sexo == 'f' || sexo == 'F') {
        printf("Vocð ð do sexo feminino. \n"); 
    }
    else 
        if(sexo == 'm' || sexo == 'M') {
           printf("\nVocð ð do sexo masculino. \n"); 
        }
        
    else {
        printf("Vocð digitou um valor de sexo invðlido");
    }*/
    
    float salario, media, maiorSalario, somaSalarial;
    int cont;

    maiorSalario = 0;
    somaSalarial = 0;

   for (cont=1; cont<=10; cont++) {
       printf("Digite o salário do funcionário: \n");
       scanf("%f", &salario);
       fflush(stdin);

       somaSalarial = somaSalarial + salario;
       
       if(salario > maiorSalario) {
           maiorSalario = salario;
       }
   }

   media = somaSalarial/10;
   printf("O maior salario da empresa e = %.3f \n", maiorSalario);
   printf("A media salarial da empresa e = %.3f \n", media);

    return 0;

    
}