//Fatorial Recursivo
//Escreva uma função recursiva que calcule o fatorial de um número inteiro positivo. O programa deve solicitar ao usuário um número e exibir o resultado.

#include<stdio.h>
//para colocar alguma função no código em C.

    int fatorial(int n){
        if (n ==1 || n==0){
            return 1 ; // caso base, é para para de chamar a função ,quando chega em 1 ,ele para.
        }else {
            return n * fatorial(n-1);
        }
    }
    int main (){
        int numero,resultado;
            
            printf("Digite um número inteiro positivo :  ");
            scanf("%d",&numero);

            if(numero<0){
                printf("Número inválido.Digite um valor positivo. \n" );
            }else{
                int resultado = fatorial(numero);
                printf("O fatorial de %d é : %d\n",numero,resultado);
            }

            return 0;
        }
    

