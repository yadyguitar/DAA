#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

typedef struct user{
  char nombre[50];
  int edad;
}User;

typedef struct nodo{
  int dato;
  struct nodo *sgt;
} Nodo;

typedef struct cola{
  Nodo * ini;
  Nodo * fin;
//:D:
} Cola;
/*
typedef struct string{
  char cad[50];
}String;
*/

void insertarColita(Cola * fila, int dato){
  Nodo * newElem = (Nodo *) malloc(sizeof(Nodo));
  if (! newElem)
      return;
  newElem->dato=dato;
  newElem->sgt = NULL;
  
  if( fila->ini == NULL)   
    fila->ini = newElem;    
  else
    fila->fin->sgt = newElem;
  
  fila->fin = newElem;
}

int getColita(Cola * fila){
  if(!fila->ini)
    return -1;  
  
  int tmp=fila->ini->dato;
  Nodo *aux = fila->ini;
  fila->ini=fila->ini->sgt;
  free(aux);
  
  return tmp;
}



int main(void) {
  Cola c = {};
  /*String s = {"cadena1"};*/
  insertarColita(&c, 5);
  
  return 0;

  }