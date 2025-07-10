// Números Primos
//Crie um programa que verifique se um número fornecido pelo usuário é primo. O programa deve solicitar um número e retornar se ele é primo ou não.

#include <stdio.h>
#include <stdbool.h>// incluindo biblioteca do bool,true e false.

//declaração da função 

bool is_prime (int num);


//aqui eu vou definir a função.
bool is_prime(int num){
    if (num <= 1){
        return false; // numeros menosres ou iguais a 1 não são primos.
    }
    for (int i = 2; i*i <= num; i ++){
        if (num % i == 0){ //e se o numero for igual a zero também é falso.
            return false; // se for divisivel  por i, não é primo.
        }
    }
       return true;
}

int main(){
    int num;
    printf("Digite um número:  ");
    scanf("%d",&num);


    //aqui vou  verificar se o número é primo.
    if (is_prime(num)){
        printf("%d é um número primo. \n", num);
    }else{
        printf("%d não é um número primo.  \n",num);
    }

    return 0; 
}

