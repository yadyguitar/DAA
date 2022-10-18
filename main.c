 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

/*
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

typedef struct string{
  char cad[50];
}String;


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

void burbuja(int a[], int n){
  int aux;  
  int x = 0; //T1 +
  while(x<n-1){ //T2 + SUMA{x = 0 -> n - 2}(
    for(int j=0; j< n-1-x; j++) //T3 + T4 + SUMA{j = 0 -> n-2-x}(
      if(a[j]>a[j+1])
      {
        aux = a[j];
        a[j] = a[j+1];
        a[j+1] = aux;
      }//)+T5
    x++;//+T6
  }//)

}
*/

typedef struct user{
  int id;
  int edad;
}User;

int buscar(User users[], int n, int x){
  int i = 0;
  for(; i < n && users[i].id != x; i++); 
  return i;
}

int main(void) {
  int a[] = {5,4,3,2,1};
  
  User usuarios[] = { {1, 25}, {5, 21}, {2, 26}, {3, 20}, {8, 19}, {4, 28}};       int n = sizeof(usuarios)/sizeof(User);  

  printf("%d\n", buscar2(0, usuarios, n));
  /*
  int estaOrdenado = 1;
  int n = sizeof(a)/sizeof(int);
  //String s = {"cadena1"};
  //insertarColita(&0c, 5);

  int aux, menor;
  for(int i=0; i<n-1; i++)
  {
    menor = i;
    for(int j=i+1; j<n; j++){
      if(a[menor] > a[j])
        menor = j; 
      if(a[j-1] > a[j])
        estaOrdenado=0;
    }
    if (estaOrdenado)
      printf("ya esta ordenado");
      break;
       //Solo guarda la posicion
    //luego de encontrar en donde se encuentra la posición del menor dentro del subarreglo
    aux = a[i];
    a[i] = a[menor];
    a[menor] = aux;
  }
  */
  
  return 0;
}

int buscar2(int id,User *user,int n){
  for(int i=0;i<n;i++){
    if(user[i].id==id){
      return i;
    }
  }
  return -1;
}



int buscar4(int id, int n, User *u)
{
  for (int i=0; i<n; i++)
    if(id == u[i].id)
      return i;
  return -1;
}