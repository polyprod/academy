/********************************
* Filename: helloworld.c
* 
* author: filbri
* created: 2019-10-15
* 
* notes: 
* 
* ver: 2019-10-15 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{   
    float x = 0.12345;
    if (x == 0.12345f)
    {
        printf("Equal!");
    }
    else
    {
        printf("Not equal!");
    } 

   /* short int n = 32767;
    printf("%d\n", n);
    n = n + 3;
    printf("%d\n", n);    
    */

return 0;
}