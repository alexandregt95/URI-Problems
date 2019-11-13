#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, n1=0, n2=1, aux, casos;
    scanf("%d", &casos);
    for(i=0;i<casos;i++)
    {
        if(i==casos-1)
            printf("%d\n",n1);
        else
        printf("%d ",n1);
        aux=n1+n2;
        n1=n2;
        n2=aux;
    }
}