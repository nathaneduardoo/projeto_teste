#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy (int x, int y){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coord);
}

void tela(){
    system("cls");
    int i;
    for(i = 0; i < 25; i++){
        gotoxy(01,i);
        printf("|");
        gotoxy(80,i);
        printf("|");
    }

    gotoxy(01,01);
    printf("+---------------------------------------------------------------------------------------+");
    gotoxy(01,04);
    printf("+---------------------------------------------------------------------------------------+");
    gotoxy(01,22);
    printf("+---------------------------------------------------------------------------------------+");
    gotoxy(01,24);
    printf("+---------------------------------------------------------------------------------------+");

    gotoxy(03,02);
    printf("UNICV");
    gotoxy(61,02);
    printf("Estrutura de Dados");

    gotoxy(68,03);
    printf("prof.Rodney");

    gotoxy(02,23);
    printf("MSG: ");
}

typedef struct 
{
    int codigo;
    char nome[50];
    char endereco[50];
    char cargo[50];
    char dt_admissao[11];
    char telefone[15];
    float salario;
}Reg_Funcionario;

typedef struct TipoItem *TipoApontador;

typedef struct TipoItem
{
TipoApontador anterior;
Reg_Funcionario conteudo;
TipoApontador proximo;
}TipoItem;

typedef struct 
{
    TipoApontador primeiro;
    TipoApontador ultimo;
}TipoLista;



int main()
{
    tela();

    int opcao;

    gotoxy(40,8);
    printf("1 - cadastrar no inicio da lista.");
    gotoxy(40,10);
    printf("2 - cadastrar no final da lista.");
    gotoxy(40,12);
    printf("3 - cadastrar no meio da lista.");
    gotoxy(40,14);
    printf("4 - excluir no inicio da lista.");
    gotoxy(40,16);
    printf("5 - excluir no final da lista.");
    gotoxy(40,18);
    printf("6 - excluir no meio da lista.");
    gotoxy(40,20);
    printf("7 - alterar cliente.");
    gotoxy(40,22);
    printf("8 - consultar cliente.");
    gotoxy(40,24);
    printf("9 - excluir cliente.");

    // Leitura da entrada
    scanf("%d", &opcao);


    
}