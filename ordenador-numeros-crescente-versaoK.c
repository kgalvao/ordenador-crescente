#include <stdio.h>

void ordena(int a, int b, int c){
    int temp;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c){
            temp=a;
            a=c;
            c=temp;
        }
        if(b>c){
            temp=b;
            b=c;
            c=temp;
        }
         printf("Valores em ordem crescente:%d %d %d\n",a,b,c);
}


int main(){
    int n;
    int a,b,c;

    printf("Digite 3 valores inteiros:\n");
    scanf("%d %d %d", &a,&b,&c);
            ordena(a,b,c);



        return 0;
        //}
}

