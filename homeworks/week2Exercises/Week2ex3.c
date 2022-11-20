/*
 Filename: Week2ex3.c
  
 Author: filbri
 Created: 2019-09-26
  
 Notes: This program prints to screen how many bytes each of the four basic 
 arithmetic operations (addition, subtraction, multiplication and division)
 is represented by in the compiler 
  
 Ver: 2019-09-26 first version
 */

#include <stdio.h>

int main()
{
    // Calculating the size of +, -, *, /

    int add = sizeof('+');
    int sub = sizeof('-');
    int multi = sizeof('*');
    int div = sizeof('/');

    printf("Addition is represented by %d bytes in this compiler.\n", add);
    printf("Subtraction is represented by %d bytes in this compiler.\n", sub);
    printf("Multiplication is represented by %d bytes in this compiler.\n", multi);
    printf("Division is represented by %d bytes in this compiler.\n", div);

    return 0;
}