/*
 *   Código desenvolvido por Luan Vilela     26/11/2020
 *   https://github.com/luan-vilela/Exemplos-c-digos-C
 *   License MIT - Free Software
 *
 * Esse código Recebe um 10 números e ordena eles, após isso mostra os números não repetidos 
 * 
 *       EXEMPLO DE FUNCIONAMENTO:
 *         vet[0]=0
 *         vet[1]=1
 *         vet[2]=1
 *         vet[3]=1
 *         vet[4]=2
 *         vet[5]=3
 *         vet[6]=4
 *         vet[7]=4
 *         vet[8]=5
 *         vet[9]=9
 *         0 2 3 5 9 
*/

#include <stdio.h>

const int TAM = 10;

void lim_vet(int vet[]){
	for(int k=0; k<TAM; k++){
		vet[k]=0;
	}
}
void dados(int vet[]){
	int f=0;
	for(int k=0; k<TAM; k++){
		printf("Informe o valor do vetor [%d]:\n",k);
		scanf("%d",&vet[k]);
	}
}
void escrever(int vet[]){
	for(int k=0; k<TAM; k++){
		printf("vet[%d]=%d\n", k, vet[k]);
	}
}
void ordenaVetor(int vet[]){
	int aux=0;
for(int j=0; j<TAM; j++){
		for(int k=0; k<TAM-1; k++){
			if(vet[k] > vet[k+1]){
				aux=vet[k];
				vet[k]=vet[k+1];
				vet[k+1]=aux;
			}	
		}
	}	
}

// Printa sempre o anterior se o próximo for diferente
void printaNaoRepetido(int vetor[]){
    int controlador = 0;
    int contador = 0;

    for(int i= 1; i <= TAM; i++){

        // Compara se O próximo é diferente
        if(vetor[controlador] != vetor[i]){
            //Verifica se o anterior já foi computado
            // pq pode tá em uma parte de transição
            // 1 1 2 =  1 2 são diferentes porém é a primeira vez que o 2 passa aqui
            if(contador == 0 )
                printf("%d ", vetor[controlador]);

            controlador = i;
            contador = 0;
        }
        else{
            contador++;
        }
        
       
    }
    
}

int main(){
    int vetor[TAM];

    lim_vet(vetor);
    dados(vetor);
    ordenaVetor(vetor);
    escrever(vetor);
    printaNaoRepetido(vetor);


    return 0;
}