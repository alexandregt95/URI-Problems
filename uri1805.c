#include <stdio.h>

int main(){
    unsigned long long int n1,n2,soma=0,i,dif,res;
    scanf("%llu %llu", &n1, &n2);
    dif=n2-n1;
    if (dif%2==0)
    res=(n1+n2)*((n2-n1)/2)+n1+((n2-n1)/2);
    else
    res=(n1+n2)*((n2-n1)/2+1);
    printf("%llu\n",res);
}