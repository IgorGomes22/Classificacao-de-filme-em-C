#include<stdio.h>
#include <stdlib.h>
#define tam_nome 100

struct cliente {
    char nome[tam_nome];
    int idade;
};
struct filme{
    int classificacao;
    int disponivel;
};
      int resultado;
int main() {
  
	struct cliente dados;
    struct filme dadosFilme;

    printf("\nSeu nome: ");
    fflush(stdin);
    fgets(dados.nome,tam_nome,stdin);

    printf("\nIdade: ");
    scanf("%d",&dados.idade);

    printf("\nClassificacao do filme: ");
    scanf("%d",&dadosFilme.classificacao);

    printf("\nO Filme esta disponivel? [ 1 = S / 2 = N] ");
    scanf("%d",&dadosFilme.disponivel);

    if ((dados.idade >= dadosFilme.classificacao) && (dadosFilme.disponivel == 1))
    {
             resultado = 1;
    }
    else{   resultado = 0 ;}
    

    printf("\n======= DADOS CADASTRADOS ========");
    printf("\n # nome: %s",dados.nome);
    printf("\n # Idade: %d",dados.idade);
    printf("\n # Classificacao: %d",dadosFilme.classificacao);
    if (resultado != 1){
         printf(" , # Nao Pode ser locado");
         }
     else {
        printf(", # Pode ser locado");
     }
    printf("\n # Anos restantes: %d",(dados.idade < dadosFilme.classificacao)*(dadosFilme.classificacao - dados.idade));
    printf("\n=====================================\n");


    system("pause");
    return 0;
}