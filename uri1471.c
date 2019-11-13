#include <stdio.h>
int main()
{
    int n,r,pessoa,placa,i,t[100000];
    while(scanf("%d %d",&n,&r)==2)
    {
        placa = 0;
        for(i = 1; i<n+1; i++)
        {
            t[i] = 0;
        }
        for(i = 0; i<r; i++)
        {
            scanf("%d",&pessoa);
            t[pessoa] = 1;
        }
        for(i = 1; i<n+1; i++)
        {
            
            if(t[i]==0)
            {
                    printf("%d ",i);
                    placa=1;
            }
        }
        if (placa==1)
            printf("\n");
        else if(placa==0)
            printf("*\n");
    }
    return 0;
}