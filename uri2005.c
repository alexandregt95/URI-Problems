#include<stdio.h>

int main(){
    int resp,c1,c2,i,j,n,m,r[1100],c[1100];
        while(scanf("%d %d",&n,&m)==2){
        for(j=0;j<n;j++)
            scanf("%d",&r[j]);
        for(j=0;j<m;j++)
            scanf("%d",&c[j]);
        c1=0;
        c2=0;
        resp=0;
        while(resp!=n-1 || c2<m-1){
            for(i=0;i<n;i++){
                if(r[i]==c[c2]){
                    r[i]=0;
                    c2++;
                    resp++;
                    i=0;
                }
            }
            
            if()
            //printf("c1 %d c2 %d resp %d\n",c1,c2,resp);
        }
        printf("%d\n",resp);
    }
}