#include "lib.h"
float max(float numeri[], int d){
  float b=0;
  for(int i=0; i<dim; i++){
    if(b<numeri[i]){
      b=numeri[i];
    }
  }
  return b;
}
