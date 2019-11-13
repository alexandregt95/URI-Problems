#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numeros[11],tamanho=0,numhex[11];

int bindec(int n)
{
    int resp=0,pot=1;
    while(n)
    {
        resp=resp+(n%10)*pot;
        n/=10;
        pot*=2;
    }
    return resp;
}

int decbin(int n)
{
    int resp=0,pot=1;
    while(n>0)
    {
        resp=resp+(n%2)*pot;
        n/=2;
        pot*=10;
    }
    return resp;
}

void dechex(int n)
{
    tamanho=0;
    if(n==0)
    {
        numeros[0]=0;
        tamanho++;
    }
    while(n)
    {
        numeros[tamanho]=n%16;
        n/=16;
        tamanho++;
    }
}

int main()
{
    int casos,numero=0,num,numdec=0,numbin=0,m=1,i,j,k,u=1;
    char cnumero[11],cbase[5],c;
    scanf("%d",&casos);
    for(i=0;i<casos;i++)
    {
        scanf("%s %s",cnumero,cbase);
        
        if(cbase[0]=='b')
        {
            for(j=strlen(cnumero);j>0;j--)
            {
                numero=numero+(cnumero[j-1]-'0')*u;
                u=u*10;
            }
            num=bindec(numero);
            printf("Case %d:\n%d dec\n",i+1,num);
            dechex(num);
            for(k=tamanho-1;k>=0;k--)
            {
                if(numeros[k]>9)
                {
                    c='a'+numeros[k]-10;
                    printf("%c",c);
                }
                else
                    printf("%d",numeros[k]);
            }
            printf(" hex\n");
        }
        
        else if(cbase[0]=='d')
        {
            for(j=strlen(cnumero);j>0;j--)
            {
                numero=numero+(cnumero[j-1]-'0')*u;
                u=u*10;
            }
            numbin=decbin(numero);
            dechex(numero);
            printf("Case %d:\n",i+1);
            for(k=tamanho-1;k>=0;k--)
            {
                if(numeros[k]>9)
                {
                    c='a'+numeros[k]-10;
                    printf("%c",c);
                }
                else
                    printf("%d",numeros[k]);
            }
            printf(" hex\n%d bin\n",numbin);
        }
        
        else
        {
            for(j=0;j<strlen(cnumero);j++)
            {
                if(cnumero[j]-'0'>=0 && cnumero[j]-'0' <=9)
                    numhex[j]=cnumero[j]-'0';
                else
                    numhex[j]=cnumero[j]-'a'+10;
            }

            for(k=strlen(cnumero)-1;k>=0;k--)
            {
                numdec=numdec+numhex[k]*m;
                m=m*16;
            }
            numbin=decbin(numdec);
            printf("Case %d:\n%d dec\n%d bin\n",i+1,numdec,numbin);
        }
        numdec=0;numbin=0;m=1;numero=0;u=1;
        printf("\n");
    }
}