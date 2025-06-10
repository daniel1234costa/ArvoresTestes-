#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int valor;
   struct node* esquerda;
   struct node* direita;

    
}node;

node *criarno (int valor ){

node* novono = (node*)malloc(sizeof(node));
if (novono == NULL){
    printf("falha na alocação de memória");
    return NULL;
}
 novono->valor = valor;
 novono->direita = NULL;
 novono->esquerda = NULL;

 return novono;



}
 
int main (){



    return 0;
}