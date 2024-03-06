# include <stdio.h>
# include <locale.h>

void ordena (int v[]);

int main(){
	int x, vet[5];
	
	setlocale(LC_ALL, "Portuguese");
	
	for (x=0; x<5; x++){
		printf("\nDigite o %d elemento do vetor: ", x+1);
		scanf("%d", &vet[x]);
	}
	ordena(vet);
	printf("\nVetor ordenado \n");
	for (x=0; x<5; x++){
		printf("%d ", vet[x]);
	}
	
	void ordena(int v[]){
		int i, j, aux;
		for (i=0; i<5; i++){
			for (j=0; j<4;j++){
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j] = v [j+1];
			v[j+1] = aux;	
			}
		}
	}
}
