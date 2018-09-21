#include <stdio.h>
#include <stdlib.h>

#define max 30

int main ()
{

    // TelaAdm:

    // int filas,colunas;
    // printf("CONFIGURAÇÕES! 
    // ");
    // printf("Favor informar quantas filas : ");
    // scanf("%d", &filas);
    // printf("Favor informar quantas colunas : ");
    // scanf("%d", &colunas);

    TelaDeCadastro:
    
    char nome[max], email[max];
    int tel;
    
    printf("Tela de Cadastro \n");
    printf("\n");

    printf("Nome     : ");
    fgets(nome,max,stdin);

    printf("E-mail   : ");
    fgets(email,max,stdin);

    printf("Telefone : ");
    scanf("%d", &tel);

    MostarNaTela:
    printf("\n");

    printf("%s", nome);
    printf("%s", email);
    printf("%d", tel);
}