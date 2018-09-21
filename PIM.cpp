#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 30

int main ()
{
    inicio:

    TelaDeLogin:

    char loginSis[max], senhaSis[max];
    char login[max], senha[max];

    strcpy(loginSis, "adm");
    strcpy(senhaSis, "adm");

    // printf("Senhas no sistema %s , %s \n", loginSis,senhaSis); //linha de teste

    printf("Login : ");
    fgets(login,max,stdin);

    printf("Senha : ");    
    fgets(senha,max,stdin);

    // printf("senhas inseridas %s,%s \n", login,senha); // linha de teste 

    // int resultado;
    // resultado = strcmp (login, loginSis); // valor que retorna comparação de senhas

    // printf(" retorna a senha %d \n", resultado);

    if ( strcmp (login, loginSis) == 10 )
    {
        if( strcmp (senha, senhaSis) == 10 )
        {
                //printf("Autorizado Acesso!");
            goto Menu ;
        }else
        {
            printf("senha incorreta!");
        }
    }
    else
    {
        printf("user nao existe");
    }

    Menu:

    printf("Menu!");
    printf("\n");
    printf("\n 1 . Tela de configuracoes");
    printf("\n 2 . iniciar tela de cadastro");

    int opc;
    scanf("%d", opc);

    switch()

    TelaDeCadastro:
    //system("clear");
    
    char nome[max], email[max];
    int tel;
    
    printf("Tela de Cadastro \n");
    printf("\n");

    printf("Nome     : ");
    fgets(nome,max,stdin);

    printf("E-mail   : ");
    fgets(email,max,stdin);

    printf("Telefone : ");
    scanf("%d", &tel); // lembrar de limitar o numero de caracteres, e inserir o DDD

    MostarNaTela:
    printf("\n");

    printf("%s", nome);
    printf("%s", email);
    printf("%d", tel);

    TelaDeConfiguracoes:

    int filas,colunas;

    printf("CONFIGURAÇÕES!");
    printf("Favor informar quantas filas : ");
    scanf("%d", &filas);
    printf("Favor informar quantas colunas : ");
    scanf("%d", &colunas);
}