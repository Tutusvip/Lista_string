#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    char cor[8];
    printf("\digite o nome de uma cor (branco, verde e amarelo):");
    scanf("%s",cor);
    if (strcmp(cor,"branco")==0 ||strcmp(cor,"verde")==0 || strcmp(cor,"amarelo")==0 )
    {
        printf ("Cor %s validada",cor);
    }else{
        printf("Cor invalida");
    }
	return(0);
}
