#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int P,R;
    float ci;
    scanf("%d%d",&P,&R);
    ci = P*pow(1+R/100.0,2)-P;
    printf("%.2f",ci);  
    return 0;
}