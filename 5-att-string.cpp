#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
 	int i;
    char nome[1000],sobrenome[50],cpf[11],cpff[3];

    printf("Nome: ");
    fflush(stdin);
    scanf("%s",&nome);

    printf("Sobrenome: ");
    fflush(stdin);
    scanf("%s",&sobrenome);

    printf("CPF: ");
    fflush(stdin);
    scanf("%s",&cpf);

    strncat(nome,sobrenome,1);
    strncat(nome,cpf,3);
     
    printf("%s", nome);
   
	return(0);
}
