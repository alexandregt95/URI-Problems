#include <stdio.h>

int main(){
    int n,a,b,c,d,e,teste,op,i;
    while(n != 0){
            scanf("%d",&n);
            for(i = 0; i < n; i++){
                    teste = 0;
                    scanf("%d",&a);
                    scanf("%d",&b);
                    scanf("%d",&c);
                    scanf("%d",&d);
                    scanf("%d",&e);
                    if(a <= 127){ teste++; a = 1; } else { a = 0; }
                    if(b <= 127){ teste++; b = 1; } else { b = 0; }
                    if(c <= 127){ teste++; c = 1; } else { c = 0; }
                    if(d <= 127){ teste++; d = 1; } else { d = 0; }
                    if(e <= 127){ teste++; e = 1; } else { e = 0; }
                    if(teste == 1){
                             if(a == 1) printf("A\n");
                             if(b == 1) printf("B\n");
                             if(c == 1) printf("C\n");
                             if(d == 1) printf("D\n");
                             if(e == 1) printf("E\n");
                    }else{
                          printf("*\n");
                    }
            }
    }
    return 0;
}