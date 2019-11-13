#include <stdio.h>

int main(){
    unsigned long long int grao=1,resp=0;
    int i,j,caso,n;
    scanf("%d",&caso);
    for(i=0;i<caso;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            resp=resp+grao;
            grao*=2;
        }
        printf("%llu kg\n",resp/12000);
        grao=1;resp=0;
    }
}