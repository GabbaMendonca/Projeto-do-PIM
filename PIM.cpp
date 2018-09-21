#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// git remote add origin https://github.com/GabbaMendonca/Projeto-do-PIM.git 
// git remote add origin https://github.com/GabbaMendonca/Projeto-do-PIM.git
// origin https://github.com/GabbaMendonca/Projeto-do-PIM.git

#define max 30

int main ()
{   
    TelaDeLogin: // inicio da tela de login

    // variaveis da tela de login
    char loginSis[max], senhaSis[max];
    char login[max], senha[max];

    // senhas de adm
    strcpy(loginSis, "adm"); // inseri a palavra adm nas varaveis
    strcpy(senhaSis, "adm");

    // printf("Senhas no sistema %s , %s \n", loginSis,senhaSis); //linha de teste
    system("clear"); // limpa a tela do console
    printf("\n");
    printf("\n");
    
    // requisitando os dados
    printf("Login : ");
    fgets(login,max,stdin);

    printf("Senha : ");    
    fgets(senha,max,stdin);

    // printf("senhas inseridas %s,%s \n", login,senha); // linha de teste 

    // int resultado; // linha de teste
    // resultado = strcmp (login, loginSis); // valor que retorna comparação de senhas - linha de teste

    // printf(" retorna a senha %d \n", resultado); // linha de teste

    if ( strcmp (login, loginSis) == 10 ) // testa para ver se o user e a senha estão corretos
    {
        if( strcmp (senha, senhaSis) == 10 )
        {
            goto Menu; // comando goto vai para um lugar do codigo (nao feito ainda)
        }else
        {
            printf("senha incorreta!");
            goto TelaDeLogin; // volta para o inicio para inserir login e senha novamente
        }
    }
    else
    {
        printf("user nao existe");
        goto TelaDeLogin;
    }



    Menu: // menu de escolha do adm para configurar o sistema
    
    system("clear");
    printf("Menu!");
    printf("\n");
    printf("\n 1 . Tela de configuracoes");
    printf("\n 2 . iniciar tela de cadastro");
    printf("\n");
    printf("\n");
    printf("\n digite o codigo do menu :");
    
    int opc;
    scanf("%d", opc);

    switch(opc)
    {
        case 1:
        goto Menu; // tela de confg (nao feito)
        break;
        
        case 2:
        goto Menu; // inicia tela de cadastro (nao feito)
        break;
    }



    TelaDeCadastro: // tela onde o participante ira se cadastrar
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



    TelaDeConfiguracoes: // configura as sala de palaestras onde sera gerada a matrix posteriormente

    int filas,colunas;

    printf("CONFIGURAÇÕES!");
    printf("Favor informar quantas filas : ");
    scanf("%d", &filas);
    printf("Favor informar quantas colunas : ");
    scanf("%d", &colunas);
}