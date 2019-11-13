#include <stdio.h>

int main(){
    unsigned long long int n1,n2,soma;
    while(scanf("%llu", &n1)==1)
    {
        scanf("%llu", &n2);
        if(n1>n2)
            soma=n1-n2;
        else
            soma=n2-n1;
        printf("%llu\n",soma);
    }
}