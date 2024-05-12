#include <stdio.h>
#include <windows.h>

int main(){

printf("Calculadora em C!\n");
printf("Digite 10 para soma\n");
    int OPRC;
    scanf("%d", &OPRC);
 if (OPRC == 10)
    {
        printf("Digite um numero a ser somado.\n");
        int num1;
        scanf("%d", &num1);
        printf("Digite outro numero a ser somado.\n");
        int num2;
        scanf("%d", &num2);
        int res = num1 + num2;
     printf("O resultado é %d.\n", res);
    }
 else
    {
     printf("OPRC, inválida.");
    }
    Sleep(500);

}