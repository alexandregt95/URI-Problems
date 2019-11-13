#include <stdio.h>

int main(){
    int i,j,caso,dinheiro,marca,qtd=0,qtda=0;
    double preco=0,n,troco=0;
    scanf("%d",&caso);
    for(i=0;i<caso;i++)
    {
        scanf("%d %d",&dinheiro,&marca);
        for(j=0;j<marca;j++)
        {
            scanf("%lf",&preco);
            n=dinheiro;
            qtd=n/preco;
            n=n-qtd*preco;
            if(qtd>0&&troco<n)
            {
                troco=n;
            }
            qtd=0;
        }
        printf("%.2f\n",troco);
        troco=0;
    }
}