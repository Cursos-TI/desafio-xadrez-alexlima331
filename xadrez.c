#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Trabalho de Alex A. de Lima

//Recursiva para o movimento da torre
void moveTorre (int casas, int direcao){
    if (casas>0 && direcao==1){
        printf("TORRE - DIREITA\n");
        moveTorre(casas-1, 1);
    }
    else if (casas>0 && direcao==2){
        printf("TORRE - ESQUERDA\n");
        moveTorre(casas-1, 2);
    }
    else if (casas>0 && direcao==3){
        printf("TORRE - CIMA\n");
        moveTorre(casas-1, 3);
    }
    else if (casas>0 && direcao==4){
        printf("TORRE - BAIXO\n");
        moveTorre(casas-1, 4);
    }
    else{
    printf("************************************************************\n\n");
    }
}



//Recursiva para o movimento da rainha
void moveRainha(int casas, int direcao){
    if (direcao==1){
        int i = 0;
            while(i<casas){
                printf("RAINHA - DIREITA\n");
                i++;
            }
    }
    else if (direcao==2){
        int i = 0;
            while(i<casas){
                printf("RAINHA - ESQUERDA\n");
                i++;
            }
    }
    else if (direcao==3){
        int i = 0;
            while(i<casas){
                printf("RAINHA - CIMA\n");
                i++;
            }
    }
    else if (direcao==4){
        int i = 0;
            while(i<casas){
                printf("RAINHA - BAIXO\n");
                i++;
            }
    }
    else if (direcao==5){
        int i = 0;
            while(i<casas){
                printf("RAINHA - DIAGONAL DIREITA\n");
                i++;
            }
    }
    else if (direcao==6){
        int i = 0;
            while(i<casas){
                printf("RAINHA - DIAGONAL ESQUERDA\n");
                i++;
            }
    }

    printf("************************************************************\n\n");
}




//Recursiva parao movimento do bispo
void moveBispo(int casas, int direcao1, int direcao2) {
    char vertical[30];
    char horizontal[30];

    if (casas>0){
        // Define a parte vertical da direção
        if (direcao1 == 1) {
            strcpy(vertical, "BISPO - DIAGONAL/CIMA");
        } else if (direcao1 == 2) {
            strcpy(vertical, "BISPO - DIAGONAL/BAIXO");
        } 

        // Define a parte horizontal da direção
        if (direcao2 == 1) {
            strcpy(horizontal, "/DIREITA\n");
        } else if (direcao2 == 2) {
            strcpy(horizontal, "/ESQUERDA\n");
        } 

        printf("%s%s", vertical, horizontal);

        // Chamada recursiva com uma casa a menos
        moveBispo(casas - 1, direcao1, direcao2);
    }
    else if(casas == 0){
        printf("************************************************************\n\n");
        moveBispo(casas - 1, direcao1, direcao2);
    }
}



//Recursiva para o movimento do cavalo
void moveCavalo (int direcao1, int direcao2) {
    char vertical[30];
    char horizontal[30];

         // Define a parte horizontal da direção
         if (direcao1 == 1) {
            strcpy(horizontal, "CAVALO - DIREITA");
        } else if (direcao1 == 2) {
            strcpy(horizontal, "CAVALO - ESQUERDA");
        } 

        // Define a parte vertical da direção
        if (direcao2 == 1) {
            strcpy(vertical, "- CIMA");
        } else if (direcao2 == 2) {
            strcpy(vertical, "- BAIXO");
        } 

        printf("%s%s%s", horizontal, vertical, vertical);
        printf("\n************************************************************\n");
        printf("\n\n\n");
}


/**************************************************************************************************/

int main() {
    int i = 0;
    int movimentoCavalo, movimentoTorre, movimentoRainha, movimentoBispo;
    int direcaoTorre, direcaoRainha, direcaoBispo, direcaoBispo1, direcaoCavalo, direcaoCavalo1;


    //Solicita as entradas para o usuário - Jogo mais interativo //

    /*Para o movimento da torre*/
    printf("Digite o número que representa o movimento da torre:\n");
    printf("1 - DIREITA\n");
    printf("2 - ESQUERDA\n");
    printf("3 - CIMA\n");
    printf("4 - BAIXO\n");
    scanf("%d",&direcaoTorre);

    printf("Digite a quantidade de casas que a torre irá se mover:");
    scanf("%d",&movimentoTorre);
    printf("\n\n");


    /*Para o movimento da rainha*/
    printf("Digite o número que representa o movimento da rainha:\n");
    printf("1 - DIREITA\n");
    printf("2 - ESQUERDA\n");
    printf("3 - CIMA\n");
    printf("4 - BAIXO\n");
    printf("5 - DIAGONAL DIREITA\n");
    printf("6 - DIAGONAL ESQUERDA\n");
    scanf("%d",&direcaoRainha);


    printf("Digite a quantidade de casas que a rainha irá se mover:");
    scanf("%d",&movimentoRainha);
    printf("\n\n");



    /*Para o movimento do bispo*/
    printf("Digite o número que representa o primeiro movimento do bispo:\n");
    printf("1 - CIMA\n");
    printf("2 - BAIXO\n");
    scanf("%d",&direcaoBispo);
    printf("\n");


    printf("Digite o número que representa o primeiro movimento do bispo:\n");
    printf("1 - ESQUERDA\n");
    printf("2 - DIREITA\n");
    scanf("%d",&direcaoBispo1);
    printf("\n");


    printf("Digite a quantidade de casas que o bispo irá se mover:");
    scanf("%d",&movimentoBispo);
    printf("\n\n");


     /*Para o movimento do cavalo*/
     printf("Digite o número que representa o primeiro movimento do cavalo:\n");
     printf("1 - DIREITA\n");
     printf("2 - ESQUERDA\n");
     scanf("%d",&direcaoCavalo);
     printf("\n");

 
     printf("Digite o número que representa o primeiro movimento do bispo:\n");
     printf("1 - CIMA\n");
     printf("2 - BAIXO\n");
     scanf("%d",&direcaoCavalo1);
     printf("\n\n");



    //Chamada das recursivas
    //Para torre
    if (direcaoTorre>0 && direcaoTorre<5){
        moveTorre(movimentoTorre, direcaoTorre);
    }else{
        printf("Você escolheu uma direção de movimento INVÁLIDA para a TORRE.\n\n\n");
        printf("************************************************************\n\n");
    }

    //Para rainha
    if (direcaoRainha>0 && direcaoRainha<7){
        moveRainha(movimentoRainha, direcaoRainha);
    }else{
        printf("Você escolheu uma direção de movimento INVÁLIDA para a RAINHA.\n\n\n");
        printf("************************************************************\n\n");
    }

    //Para bispo
     if (direcaoBispo>0 && direcaoBispo<3 && direcaoBispo1>0 && direcaoBispo1<3){
        moveBispo(movimentoBispo, direcaoBispo, direcaoBispo1);
    }else{
        printf("Você escolheu uma direção de movimento INVÁLIDA para o BISPO.\n\n\n");
        printf("************************************************************\n\n");
    }

    //Para cavalo
    if (direcaoCavalo>0 && direcaoCavalo<3 && direcaoCavalo1>0 && direcaoCavalo1<3){
        moveCavalo(direcaoCavalo, direcaoCavalo1);
    }else{
        printf("Você escolheu uma direção de movimento INVÁLIDA para o CAVALO.\n\n\n");
    }

    return 0;
}