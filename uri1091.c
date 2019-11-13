#include<stdio.h>
 
int main()
{
    int tc,x,y,n,m,i;
    while(scanf("%d",&tc)==1){
        if(tc!=0){
            scanf("%d %d",&n, &m);
            for(i=1;i<=tc;i++){
                scanf("%d %d",&x, &y);
                    if(x==n || x==m || y==n || y==m){
                        printf("divisa\n");
                    }
                    else if(x>n && y >m){
                        printf("NE\n");
                    }
                    else if(x<n && y>m){
                        printf("NO\n");
                    }
                    else if(x<n && y<m){
                        printf("SO\n");
                    }
                    else if(x>n && y<m){
                        printf("SE\n");
                    }
            }
        }
        else{
            break;
        }
    }
    return 0;
}