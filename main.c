#include <stdio.h>

float Multiplication(float a, float b) {
    return a * b;
}

float addition(float a, float b){
    float total = a + b;
    return total;
}
float division(float a, float b){
    float total = a/b;
    return total;
}

float subtraction(float a, float b){
	return a-b;
}
int main(){
    int pilihan = 0;
    float a,b;
    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Multiplication");
    puts("4. Division");
    printf("Masukan Pilihan Anda: ");
    scanf("%d", &pilihan);
    printf("Masukan nilai a: ");
    scanf("%f",&a);
    printf("Masukan nilai b: ");
    scanf("%f",&b);
    switch(pilihan){
        case 1:
            printf("Result: %f", addition(a,b));
            break;
        case 2:
 			printf("Result: %f",subtraction(a,b));
            break;
        case 3:
            printf("Result: %f",Multiplication(a,b));
            break;
        case 4:
            printf("Result: %f",division(a,b));
            break;
        default: 
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}
