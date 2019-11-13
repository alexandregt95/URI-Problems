#include <stdio.h>

int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}

int main(){
    int casos,i,j,n,k;
    scanf("%d",&casos);
    for(i=0;i<casos;i++){
        scanf("%d %d",&n,&k);
        printf("Case %d: %d\n",i+1,josephus(n,k));
    }
}

