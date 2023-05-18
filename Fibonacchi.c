#include <stdio.h>

int main () {

    int a=0, b=1, aux=1;

    for (int i =0;i<20;i++){
        printf("%d  ",aux);
        aux=a+b;
        a=b;
        b=aux;

    }


    return 0;

}
