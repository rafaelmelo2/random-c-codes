#include <stdio.h>

int fatorial_recursivo(int n);
int fatorial_nao_recursivo(int n);


int main(){
    int num;
    printf("\nDigite o número a ser feito o fatorial: ");
    scanf("%d", &num);
    printf("\n\nFatorial recursivo: %d", fatorial_recursivo(num));
    printf("\n\nFatorial não recursivo: %d\n\n", fatorial_nao_recursivo(num));
}

int fatorial_recursivo(int n){
    if (n==0)
        return 1;
    else
        return n*fatorial_recursivo(n-1);
}

int fatorial_nao_recursivo(int n){
    int i, f = 1;
    for(i=1; i<=n; i++)
        f = f*i;
    return f;
}
