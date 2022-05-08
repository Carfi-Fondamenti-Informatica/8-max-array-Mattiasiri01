#include "lib.h"
int i;
float massimo(float numeri[], int d){
  float max=0;
  for(int i=0; i<dim; i++){
    if(numeri[i]> max){
      max= numeri[i];
    }
  }
  return max;
}
