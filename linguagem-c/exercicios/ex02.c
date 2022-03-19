#include <stdio.h>
#include <locale.h>

    int main (int agrc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

        //Código mostra qual seu sexo com else if;

        char sexo;
        printf("Qual e o seu sexo? (f/m).\n");
        scanf("%c", &sexo);

        if(sexo == 'f' || sexo == 'F') {
            printf("Voce e do sexo feminino. \n"); 
        }
        else if(sexo == 'm' || sexo == 'M') {
            printf("\nVoce e do sexo masculino. \n"); 
            }
            
        else {
            printf("Voce digitou um valor de sexo invalido");
        }
        
        //Código mostra o salário com uso de if dentro do for;

        float salario, media, maiorSalario, somaSalarial;
        int cont;

        maiorSalario = 0;
        somaSalarial = 0;

     for (cont=1; cont<=10; cont++) {
        printf("Digite o salario do funcionario: \n");
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