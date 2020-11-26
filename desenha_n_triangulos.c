/*
 *   Código desenvolvido por Luan Vilela     26/11/2020
 *   https://github.com/luan-vilela/Exemplos-c-digos-C
 *   License MIT - Free Software
 *
 * Esse código Recebe um N inteiro e desenha N triângulos na mesma linha 
 * 
 *       EXEMPLO DE FUNCIONAMENTO:
 *       Digite N: 6
 *
 *       *       *       *       *       *       *
 *       **      **      **      **      **      **
 *       ***     ***     ***     ***     ***     ***
 *       ****    ****    ****    ****    ****    ****
 *       *****   *****   *****   *****   *****   *****
*/

#include <stdio.h>

// Tamanho da torre de asterisco
const int LINHA = 5;

void linha(int asterisco){
    //print N asterisco
    while(asterisco--)
        printf("*");
    
    printf("\t");
}

// Recebe um número > 0 e print a quantidade de triângulos
void figura(int a){
    int qtdEstrela = 1;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < a; j++)
            linha(qtdEstrela);
        
        printf("\n"); 
        qtdEstrela++;   
    }
}

int main(){
    int n;

    printf("Digite N: ");
    scanf("%d", &n);
    printf("\n");

    //Desenha figura
    figura(n);


    return 0;
}