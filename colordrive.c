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