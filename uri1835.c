#include <stdio.h>
int cidade[101][101],fila[101],posicao=0;

int conexo()
{
    enfileira(n);
    while(fila[0])
    {
        
    }
}

void enfileira(int n)
{
    fila[posicao]=n;
    posicao++;
}
void desenfileira(int n)
{
    int i,aux;
    fila[posicao]=n;
    posicao--;
}

int main(){
    int caso,i,j,n,m,,x,y;
    for(i=0;i<caso;i++){
        for(j=0;j<caso;j++){
            cidade[i][j]=0;
        }
        //v[i]=-1;
    }
    scanf("%d",&caso);
    for(i=0;i<caso;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=0;j<m;j++)
        {
            scanf("%d %d",&x,&y);
            cidade[x][y]=1;
            cidade[y][x]=1;
        }
        if(conexo==1)
            printf("Caso #%d: ainda falta(m) %d estrada(s)",i+1,falta);
        else
            printf("Caso #%d: a promessa foi cumprida",i+1);
    }
}