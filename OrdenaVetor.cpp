#include<iostream>
#include<conio.h>
using namespace std;
void crescente(int *v){ //Médoto de ordenação selection sort (crescente)  
  int i, j, min, aux;
  for (i = 0; i < 5; i++){ 
    min = i;  
    for (j = (i+1); j <5 ; j++) {
      if(v[j] < v[min]) { 
        min = j;
      }
    }
    if (i != min) {
      aux = v[i];
      v[i] = v[min];
      v[min] = aux;
    }
  }
 
}
void decrescente(int *v){  //Médoto de ordenação selection sort (decrescente)
 int i, j, max, aux;
  for (i = 0; i < 5; i++){
    max = i;
    for (j = (i+1); j <5 ; j++) {
      if(v[j] > v[max]) {
        max = j;
      }
    }
    if (i != max) {
      aux = v[i];
      v[i] = v[max];
      v[max] = aux;
    }
  }
 	
 }
 


int main(){
 system("cls");
 setlocale (LC_ALL, "portuguese");
 int vet[5], i; 
 int op;
 for(i=0; i<5;i++ ){ //Escreve no vetor
  cin>>vet[i]; 
 }
 cout<<"Informe o tipo de ordenação: \n 1 - Crescente\n 2 - Decrescente \n>";// Menu de opções para ordenação
 cin>>op; 
 if(op==1)
 crescente(vet); //Ordena o vetor em ordem crescente
 else if(op==2) 
       decrescente(vet);//Ordena o vetor em ordem decrescente
       else
       cout<<"Opção inválida!"; // Quando o usuario digite uma opção inválida
       
 
 cout<<"Vetor ordenado: "; //Mostra o vetor após ordenação
 for(i=0; i<5;i++ ){
  cout<<vet[i]; 
 }  
  
  cout<<"\n\n\nDigite z para executar o novamnete: ";
  (getch()==122)?main():1; // se pressionar a tecla z o programa executa novamente
  
}
       
