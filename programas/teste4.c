#include <stdio.h>


int main(){
    int n1,n2,i;
    printf("Insira um Número --> ");
    scanf("%d", &n1);

    printf("Todos os números anteriores --> \n");
    for (int i=n1-1; i>=0; i--){
        printf("%d ", i);
    }
}