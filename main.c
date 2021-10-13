#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("------------------------------\n");
    printf("1 - Decimal para hexadecimal\n");
    printf("2 - Hexadecimal para decimal\n");
    printf("------------------------------\n");
    printf("Digite a opcao desejada: ");
}

int main(int argc, char *argv[]){
    
    int op, val;
    printf("------------------------------\n");
    printf(" Conversor de Bases Numericas \n");
    menu();
    scanf("%d", &op);
    getchar();

    if(op == 1){

        printf("------------------------------\n");
        printf("Informe o valor em decimal: ");
        scanf("%d", &val);
        getchar();
            
        printf("------------------------------\n");
        printf("%d em hexadecimal e: %x\n", val, val);
    
    } else if(op == 2) {
        
        printf("------------------------------\n");
        printf("Informe o valor em hexadecimal: ");
        scanf("%x", &val);
        getchar();

        printf("------------------------------\n");
        printf("%x em hexadecimal e: %d\n", val, val);

    } else {
        
        printf("------------------------------\n");
        printf("Opção Inválida!\nTente Novamente");
    }
            
    system('PAUSE');
    return 0;
}