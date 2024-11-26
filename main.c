#include <stdio.h>
#include "distanzaPunti.h"

int main() {

float dist1, dist2, dist3;
float x1, y1, x2, y2, x3, y3;

    printf("inerisci le cordinate del primo punto\nx:\n");
    scanf("%f", &x1);
    printf("y:\n");
    scanf("%f", &y1);

    printf("inserisci le cordinate del secondo punto\nx:\n");
    scanf("%f", &x2);
    printf("y:\n");
    scanf("%f", &y2);

    printf("inserisci le cordinate del terzo punto\nx:\n");
    scanf("%f", &x3);
    printf("y:\n");
    scanf("%f", &y3);

    dist1 = distanzaPunti(x1, y1, x2, y2);
    dist2 = distanzaPunti(x2, y2, x3, y3);
    dist3 = distanzaPunti(x1, y1, x3, y3);

    printf("il perimetro del triangolo e':\n%.2f",dist1+dist2+dist3);

    return 0;


}
