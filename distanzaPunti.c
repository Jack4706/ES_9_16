//
// Created by Jack on 26/11/2024.
//

#include "distanzaPunti.h"
#include <math.h>

float distanzaPunti(float x_1, float y_1, float x_2, float y_2){
  float dist = sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));

  return dist;
}
