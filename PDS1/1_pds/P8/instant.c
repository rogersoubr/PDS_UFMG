#include <stdio.h>
#include <stdlib.h>//sscanf
#include <string.h> //fgets
#include "instant.h"

//recebe o momento em char e instancia o stuct. Se der certo, retorna 0
int instant_parse(const char* str, struct instant *init){
  int hh,mm,ss;

  //pega string em inteiro
  int result = sscanf(str,"%d:%d:%d",&hh,&mm,&ss);

  //ve se não pegou os 3 valores
  if(result != 3){
    return 1;
  }

  //coloca cada valor 
  init -> hour = hh;
  init ->  minute = mm;
  init -> second = ss;

  return 0;
};

//retorna 0 se não for uma hora válida
int instant_check(struct instant i){
  if( (i.minute >59 || i.minute<0) ||
      (i.second >59 || i.second<0) ||
      (i.hour >23 || i.hour<0)
  ){
    return 0;
  }else{
    return 1;
  }

};

//vai comparar i1 com i2
//negativo = i1 é anterior
//zero = i1 é igual 
//positivo = i1 é posterior
int instant_compare(struct instant i1, struct instant i2){
  //a propia subtracap já fala se é 0,-1 ou +1
    if (i1.hour != i2.hour) {
        return i1.hour - i2.hour;
    }
    if (i1.minute != i2.minute) {
        return i1.minute - i2.minute;
    }
    return i1.second - i2.second;
};

void instant_read_vector(struct instant *v, int n){
  int count = 0;
  char aux[100];//auxiliar que pega a string lida (com \0) 

  //enquanto fot menor que o num de válidas
  while(count<n){
    //le a linha de entreda
    if( fgets(aux,sizeof(aux),stdin) == NULL){
      continue;//se errou, tenta de novo
    }
    //tira \0
    aux[strcspn(aux, "\n")] = '\0';

    struct instant temp;//struct temporario

    if (instant_parse(aux, &temp) == 0 && instant_check(temp)) {
      v[count] = temp; // armazena se for válido
      count++;
    }

  }

};

struct instant instant_largest(const struct instant *v, int n){

};

//retorna o maior instante, em ordem cronológica, no vetor v com n elementos
struct instant instant_largest(const struct instant *v, int n) {
    struct instant max = v[0];//inicializa max com o primeiro elemento do v

    for (int i = 1; i < n; i++) {//percorre os elementos restantes, começando em i=1

        //compara o instante atual v[i] com o máximo que já encontrado
        //instant_compare > 0 significa que v[i] é mais tarde que max
        if (instant_compare(v[i], max) > 0) {
            max = v[i];//se v[i] for maior, atualiza max para esse novo instante
        }
    }
    return max;//retorna o maior instante encontrado
}

const int NINSTANTS = 5;
int main(void) {
  struct instant v[NINSTANTS];
  instant_read_vector(v, NINSTANTS);
  struct instant maior = instant_largest(v, NINSTANTS);
  printf("Maior instante: %02d:%02d:%02d\n",
         maior.hour, maior.minute, maior.second);
}