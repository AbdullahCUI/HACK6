#include<stdio.h>
#include<math.h>
#include"colorUtils.h"
// made function to find the max 
double max(double red , double green, double blue){
    double max = (red > green)? red : green;
    return (max > blue)? max : blue;
}
// Function: to convert the rgb value to scale b/w 0,1
double scale(int r){
    return (double)r/255.0;
} 

// Function: which convert the rgb Filter to CMYK filter
int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k){
    // ERROR HANDLING: to check the input is valid or not
    if(r>255 || r<0 ||g>255 || g<0 ||b>255 || b<0){
        return 1;
    }
    // convert to 0,1 scale
    double red = scale(r);
    double green = scale(g);
    double blue = scale(b);
   
   
    // FORMULA: TO convert the filter from rgb to CMYK
    *k = 1 - max(red,green,blue);
    *c = (1 - r - *k)/(1 - *k);
    *m = (1 - g - *k)/(1 - *k);
    *y = (1 - b - *k)/(1 - *k);
     //CONDITION: indicate black color
    if(*k == 1.0 && *c == 0.0 && *m == 0.0 && *y == 0.0){
        return 0;
    }
    //valid check
    return 0;
    
}
