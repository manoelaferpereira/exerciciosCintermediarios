#include<stdio.h>

int main(){
    char palavrinha[100]; //Criar espaço  em até em 99 letras + '\0
    int i;

    printf("Digite uma palavra : ");
    scanf("%s",palavrinha); // lê so uma palavra sem espaços.

    //aqui descobre o tamanho da palavra.
    for(i = 0; palavrinha[i] != '\0'; i++);

    //imprime de trás para frente 
    printf("Invertida : ");
    for(i = i -1; i >= 0; i--){  
        printf("%c",palavrinha[i]);
    }
    printf("\n");
    return 0;
}