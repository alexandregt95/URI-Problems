#include<stdio.h>

int main(){
    int i,n,m,b,c,v[30000];
    for(i=0;i<21000;i++){
            v[i]=0;
        }
    scanf("%d %d",&n,&m);
    while(n!=0 && m!=0){
        c=0;
        for(i=0;i<n+10;i++){
            v[i]=0;
        }
        for(i=0;i<m;i++){
            scanf("%d",&b);
            v[b]++;
            //printf("%d\n",c);
            if(v[b]==2 && b>0 && b<=n){
                c++;
            }
        }
        printf("%d\n",c);
        scanf("%d %d",&n,&m);
    }
}