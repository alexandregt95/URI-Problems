#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transforma(unsigned long long int n){
    int numero[1000],i=0,j;
    char c;
    while(n>0)
    {
        numero[i]=n%32;
        n/=32;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(numero[j]>9)
        {
                c='A'+numero[j]-10;
                printf("%c",c);
        }
        else
                printf("%d",numero[j]);
    }
    printf("\n");
}

int main(){
    unsigned long long int n;
    scanf("%llu",&n);
    while(n)
    {
        transforma(n);
        scanf("%llu",&n);
    }
    printf("0\n");
}