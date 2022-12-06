#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nomeIncio[100],nomeMeio[50],nomeFim[50];
	
    printf("Me forneça o primeiro nome");
    fflush(stdin);
    gets(nomeIncio);
    printf("Me forneça o primeiro nome");
    fflush(stdin);
    fgets(nomeMeio,50,stdin);
    printf("Me forneça o primeiro nome");
    fflush(stdin);
    scanf("%s",&nomeFim);
    strcat(nomeIncio,strcat(nomeMeio,nomeFim));
    printf("%s",nomeIncio);

	return(0);
}
