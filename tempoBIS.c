#include <stdio.h>
#include <stdlib.h>
int TAM = 8;
int j, aux, i;

void setVetor(int *v) {
   int i;
   for (i=0; i<TAM; i++) 
    	v[i] = 10 + rand()%90;   
}

void insertSort(int *v){
	for(i = 1; i < TAM; i++){
		for(j = i; j > 0; j--){
				if(v[j] < v[j-1]){
					aux   = v[j-1];
					v[j-1]= v[j];
					v[j]  = aux;
					mostrarVetor(v,0);
				} else break;	
		}
	//	printf(".");						
	}
}

void bubbleSort(int *v){
	printf("b");
	for (i=0;i<TAM-1;i++){
		for (j=i+1; j<TAM; j++){
			if (v[i]>v[j]){
					aux = v[j];
					v[j]= v[i];
					v[i]= aux;
					mostrarVetor(v,0);
			}
		}	
	}
}

void selectSort(int *v){

	printf("Select Sort para %i elementos\n\n",TAM);


    int menor;
  
  for (i = 0; i < (TAM - 1); i++) {
    
    menor = i;
    for (j = i+1; j < TAM; j++) {
   
      if (v[j] < v[menor]) {
   menor = j;
      }
    }

    if (i != menor) {
      aux = v[i];
      v[i] = v[menor];
      v[menor] = aux;
	  mostrarVetor(v,0);
    }
  }

}

void mostrarVetor(int *v, int b){

	if(b != TAM){printf("%i ", v[b]);

		mostrarVetor(v,b+1);
	}
	else printf("\n");

}

void main(){
	int  v[8] = {26,55,31,19,87,72,23,45};
	//setVetor(v);
	//insertSort(v);
	//bubbleSort(v);
	selectSort(v);
	//mostrarVetor(v,0);
	printf("pronto selects\n");
}