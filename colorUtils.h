//colorutlis.h
double max(double red , double green, double blue);
int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k);
double scale(int r);
int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b);