#include<stdio.h>
#include<math.h>
#include"colorUtils.h"
int main(){
    int r = 10, g = 200, b = 150;
    double k, y, c, m;
    int check = rgbToCMYK(r, g, b, &c, &m, &y, &k);
    if(check == 0){
        printf("Black color\n");
    }
      if(check != 1){
        printf("RGB Filter: r = %d, g = %d, b = %d\n <<<TO>>>\nCMYK FILTER: C = %f , M = %f, K = %f, Y = %f\n",r,g,b,c,m,k,y);
    }
    else{
        printf("Invlaide: ERROR FINDED...\n");
    }
    printf("\n");
    c = 0.2;
    y = 0.344;
    k = 0.666;
    m = 0.1980;
    int validation = cmykToRGB(c, m, y, k, &r, &g, &b);
    if(validation == 0){
      printf("cmyk Filter: c = %lf, m = %lf, y = %lf, k = %lf\n <<<TO>>>\nrgb FILTER: r = %d , g = %d, b = %d, \n",c,m,y,k,r,g,b);
    }
    else{
        printf("Invalide: ERROR FINDED....\n");
    }
}