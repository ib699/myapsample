#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a ,b ,c ,d ,e ,f ,g ,h ;
    time_t t;
    srand((unsigned) time(&t));
    a = rand() % 21 + 5 ;
    b = rand() % 21 + 5 ;
    c = rand() % 91 + 0 ;
    d = a * a ;
    e = b * b ;
    f = cos(c) ;
    g = d * e -( 2 * a * b * f) ;
    h = sqrt(g) ;
    printf("%f\n",a) ;
    printf("%f\n",b) ;
    printf("%f\n",c) ;
    printf("%f\n",h) ;
    return 0;
}
