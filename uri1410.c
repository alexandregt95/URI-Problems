#include <stdio.h>

int main(){
    int att,def,i,dist,matt=10000,c=0;
    scanf("%d %d",&att,&def);
    while(att!=0&&def!=0)
    {
        for(i=0;i<att;i++)
        {
            scanf("%d",&dist);
            if(dist<matt)
                matt=dist;
        }
        for(i=0;i<def;i++)
        {
            scanf("%d",&dist);
            if(dist<=matt)
                c++;
        }
        if(c>=2)
            printf("N\n");
        else
            printf("Y\n");
        c=0;
        matt=10000;
        scanf("%d %d",&att,&def);
    }
}