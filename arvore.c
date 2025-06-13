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
node* inserirno(node* raiz, int valor){

if(raiz == NULL){
    return criarno(valor);
}
if(valor < raiz->valor){
    raiz->esquerda = inserirno(raiz->esquerda, valor);
}
else if(valor > raiz->valor){
    raiz->direita = inserirno(raiz->direita, valor);
}
else{
    printf("o valor já existe na árvore, portanto nao sera inserido");
}
return raiz;

}
 
int main (){



    return 0;
}