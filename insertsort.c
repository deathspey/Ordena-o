#include <stdio.h>
#include <stdlib.h>

int TAM = 80000;

void insertSort(int *v){


    int i , j , aux;

    for(i = 1 ; i < TAM ; i++){

        aux=v[i];


        for(j = i -1 ; j>=0 && v[j] > aux;j--){

                v[j+1] = v[j];
                
        }

        v[j+1] = aux;

    }

}

void selectSort(int *v){

    int i , j , aux;

    for(i = 0;i < TAM ; i++){

        for(j=i+1; j <TAM-1; j++){

            if(v[j] < v[i] ){

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            }

        }

    }

}

void main(){

    int v[TAM] ;

    int i  , p;

    for(i = 0 ; i < TAM ; i++){

        v[i] = rand()%TAM ;

    }

   insertSort(v);//10seg
   selectSort(v);//28seg

    /* for(p = 0 ; p < TAM ; p++){
        printf("%i ", v[p]);
        printf("\n");}*/ 

}