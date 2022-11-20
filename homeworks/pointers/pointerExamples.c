/********************************
* Filename: pointerExamples.c
* 
* author: filbri
* created: 2019-10-24
* 
* notes: this program contains examples of how pointers work
* 
* ver: 2019-10-24 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int *pTest; // defining pointer
    int number = 10;

    pTest = &number; // here we store the memory address for number in pTest. 
                     // but *pTest points to what is stored in the memory address of number

    printf("%d\t%d", *pTest, pTest);  

    *pTest = 72; // change the value in the memory location *pTest points to

    printf("\n%d\t%d", *pTest, pTest);  
    
return 0;
}