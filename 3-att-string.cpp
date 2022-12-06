#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nome[100] , email[100] , endereco[100];
    char nomeB[100] , emailB[100] , enderecoB[100];
    
    printf("Nome: ");
    fflush(stdin);
    fgets(nome,100,stdin);
    
    printf("email: ");
    fflush(stdin);
    fgets(email,100,stdin);
    
    printf("endereçoo: ");
    fflush(stdin);
    fgets(endereco,100,stdin);
    
    strcpy(nomeB,nome);
	strcpy(emailB,email);
	strcpy(enderecoB,endereco);
    printf("Backup feito com sucesso\n");
        
	return(0);
}
