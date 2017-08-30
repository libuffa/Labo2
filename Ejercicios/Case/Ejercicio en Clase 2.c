#include "stdio.h"

int main(){

    char letter;
    printf("Ingrese una letra mayuscula\n");
    scanf("%c",&letter);

    switch(letter){
        case 'A':
        case 'E':
        case 'F':
        case 'H':
        case 'I':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("Es una letra mayuscula solo con rectas\n");
            break;
        case 'Q':
        case 'U':
        case 'O':
        case 'S':
        case 'C':
            printf("Es una letra mayuscula solo con curvas\n");
            break;
        case 'R':
        case 'P':
        case 'D':
        case 'J':
        case 'B':
        case 'G':
            printf("Es una letra mayuscula con rectas y curvas\n");
            break;
        default:
            printf("Ud no ingreso una letra mayuscula\n");
    }
    return 0;
}
