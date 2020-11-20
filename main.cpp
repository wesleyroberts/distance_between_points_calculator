#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
      struct ponto{
      int x=0;
      int y=0;
    };
 
float dist(int a,int b, int c, int d){
    float result;
    result = sqrt((pow(a-b,2))+(pow(c-d,2)));
    return result;}

  int main() {
    ponto a;
    ponto b; 
    float result;
    
    printf("VAMOS CALCULAR A DITÂNCIA ENTRE DOIS PONTOS\n");
    printf("informe o valor do primeiro x¹ :");
    scanf("%i",&a.x);
    printf("informe o valor do primeiro y¹ :");
    scanf("%i",&a.y);
    printf("informe o valor do primeiro x² :");
    scanf("%i",&b.x);
    printf("informe o valor do primeiro y² :");
    scanf("%i",&b.y);
    result= dist(a.x,b.x,a.y,b.y);
    printf("O resultado é: %f",result);

    return 0;
   
   }