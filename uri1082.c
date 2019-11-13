#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DFS(G,v)
{
    
}
int visita(G, u)
{
    int t1[30],t2[30],t=0,i,pai[30];
    cor[u]=2;
    t++;
    t1[u]=t;
    for(i=0;i<G,i++)
    {
        if(grafo[i][u]==1)
        {
            pai[i]=u;
            visita(G,i);
            cor[i]=1;
        }
    }
}

int main()
{
    int caso,i,j,k,l,m,conexo,vert,aresta,grafo[30][30],cor[30];
    char c1,c2,letra;
    scanf("%d",&caso);
    for(i=1;i<=caso,i++)
    {
        for(k=0;k<30;k++)
            {
                for(l=0;l<30;l++)
                {
                    grafo[k][l]=0;
                }
                cor[k]=0;
            }
        scanf("%d %d",&vert,&aresta);
        for(j=0,j<aresta;j++)
        {
            scanf("%c %c",&c1,&c2);
            grafo[c1-'a'][c2-'a']=1;
        }
        
        printf("Case #%d:",caso);
        for(m=0;m<;m++)
        {
            printf("%c,",letra+);
        }
        printf("%d connected components",conexo);
    }
}