#include <stdio.h>

void main(){

    int v[8] = {6,5,3,1,8,7,2,4};

    int i , p , j , aux;

    for(i = 1 ; i < 8 ; i++){

        aux=v[i];


        for(j = i -1 ; j>=0 && v[j] > aux;j--){

                v[j+1] = v[j];
                
        }

        v[j+1] = aux;

    for(p = 0 ; p < 8 ; p++){
        printf("%i ", v[p]);
        printf("\n");} 
    }
  

}