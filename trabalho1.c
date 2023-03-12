#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>


struct Grammy {
    char nome[20];
    bool temGrammy;
    int quantGrammys;
    } beyonce;
    

int main(){
	
setlocale(LC_ALL, "Portuguese");
    beyonce.quantGrammys = 32;
    strcpy(beyonce.nome, "Beyonce");
    beyonce.temGrammy = 1;

    if (beyonce.temGrammy == 1) {
        printf("A %s possui %d Grammys.\n", beyonce.nome, beyonce.quantGrammys);
        }
    else {
        printf("O artista %s nao possui evolucoes.", beyonce.nome);
    }

int t = 2;
int i;
struct Grammy vet[t];

printf("Digite a entrada de %d artistas: \n", t);

for (i = 0; i < t; i++) {
    printf("Digite o nome do Artista %d \n", i+1);
    fgets(vet[i].nome, 20, stdin);
    strtok(vet[i].nome, "\n");

    printf("Diga se o artista tem Grammys (3 - Sim  4 - Não): \n", i+1);
    scanf("%d", &vet[i].temGrammy);

    printf("Diga quantos grammys o artista tem:\n");
    scanf("%d", &vet[i].quantGrammys);
    while(getchar() != '\n');
    }
    
for (i = 0; i < t; i++) {
    if (vet[i].temGrammy == 1) {
        printf("O artista %s possui %d grammys.\n", vet[i].nome, vet[i].quantGrammys);
        }
    else {
        printf("O artista %s nao possui grammys.\n", vet[i].nome);
        }
    }


printf ("Digite o numero do artista para mais informações iqojo:\n");
scanf("%d", &t);
printf("O artista %s possui %d grammys.\n", vet[t].nome, vet[t].quantGrammys);


}



