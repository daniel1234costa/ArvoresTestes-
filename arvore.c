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
node* buscarno(node*raiz, int valor){
    if(raiz == NULL){
        return NULL;

    }
    else if(valor == raiz->valor){
        return raiz;
    }
    else if(valor < raiz->valor){
        return buscarno(raiz->esquerda, valor);
    }
    else {

        return buscarno(raiz->direita, valor);
    }
    


}
 
int main (){
    node* raiz = NULL;
    raiz = inserirno(raiz,12);
   int valor;
   printf("Escolha o nó que vai buscar\n");
   scanf("%d", &valor);
  node* noencontrado = buscarno(raiz, valor);
   if (noencontrado != NULL) {
        printf("No com o valor %d encontrado!\n", noencontrado->valor);
    } else {
        printf("No com o valor %d nao encontrado na arvore.\n", valor);
    }





    return 0;
}