#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b ,c ,d;
    char a ;
    scanf("%c",&a) ;
    scanf("%d",&b) ;

    if(97>(int)a){
    c = (int)a + b ;
    printf("%c",(char)c);
    d = c + (((char)'a')-((char)'A')) ;
    printf("%c",(char)d);
    } else {
         c = (int)a + b ;
         printf("%c",(char)c);
         d = c - (((char)'a')-((char)'A')) ;
         printf("%c",(char)d);
         }
    return 0;
}
