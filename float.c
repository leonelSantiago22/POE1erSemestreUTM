#include <stdlib.h>
#include <stdio.h>
float  num1,num2;
int main (){
                        printf("Dame un numero: ");
                        scanf("%f", &num1);
                        printf("Dame un segundo numero: ");
                        scanf("%f", &num2);
                        printf("La suma es: %f  \n y la resta es:%f   \n y la division es:%f  \n", num1 + num2, num1-num2, num1/num2);
                        system("pause");
                        return 0;
} 