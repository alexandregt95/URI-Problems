#include <stdio.h>

int main(){
    int v[45],v2[45],i,j,k,l,termos=1,linha;
    unsigned long long int soma=0;
    for (i=0;i<45;i++)
    {
        v[i]=0;
        v2[i]=0;
    }
    v[2]=1;
    scanf("%d",&linha);
    for(i=0;i<=linha;i++)
    {
        for(j=0;j<termos;j++)
            v2[j+2]=v[j]+v[j+1]+v[j+2];
        for(k=0;k<termos+2;k++)
            v[k]=v2[k];
        termos+=2;
    }
    for(l=0;l<=termos;l++)
        soma+=v[l];
    printf("%llu\n",soma);
}