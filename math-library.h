// Math library

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "mathlibrary"


//A
int par(int x){
      int aux = x%2;
      if(aux==0){
          return 1;
          }
      else
          return 0;
      }
      
      
//B    
int impar(int x){
      int aux = x%2;
      if(aux!=0){
         return 1;
         }
      else
         return 0;
      }
      
//C      
int div 3(int x){
      int aux = x%3;
      if(aux==0){
         return 1;
         }
      else
         return 0;
      }
      
//D     
int div n(int x,int n){
      int aux = x%n;
      if(aux==0){
        return 1;
        }      
      else
        return 0;
      }
      
      
//E      
int maior(int x,int y){
      if(x>y){
         return x;
         }
      else
         return y;
      }
      
      
//F      
int menor(int x,int y){
      if(x<y){
         return x;
         }
      else
         return y;
      }
      
      
//G      
int maior 3(int x,int y,int z){
      if(x>y && x>z){
         return x;
         }
      else if(y>x && y>z){
         return y;
         }
      else
         return z;
      }
      
      
//H      
int menor 3(int x,int y,int z){
      if(x<y && x<z){
         return x;
         }
      else if(y<x && y<z){
         return y;
         }
      else
         return z;
      }
      
      
//I
int random n(int n){                      
      srand(time(NULL));                   
      int x = rand()%n;                  
         return x;
      }        
      

//J
int somaATE(int x){
    int aux = 0;
  for(int i = 0;i <= x;i++)
     aux = aux+i;
    return aux;
}


//K
int somatorio(int x,int y){
     int aux = 0;
   for(int i = menor(x,y);i <= maior(x,y);i++)
      aux = aux+i;
     return aux;
}


//L
int somaPares(int x,int y){
     int aux = 0;
    for(int i = menor(x,y);i <= maior(x,y);i++){
        if(i%2 == 0)
           aux = aux+i;
        }
       return aux;
}


//M
int contaImpares(int n){
      int aux = 0;
    srand(time(NULL));
     for(int i = 0;i<n;i++){
      sort = rand();
     if(sort%2 == 1)
        aux++;
     }
       return aux;
}


//N
int primo(int x){
     for(int i = 2;i <= x-1;i++){
           if(x%1 == 0)
             return 0;
         }
             return 1;
}


//O
int contaPrimos(int x,int y){
       int aux = 0;
     for(int i = menor(x,y);i <= maior(x,y);i++){
             if(primo(i) == 1)
         aux++;
     }
        return aux;
}
      
         
