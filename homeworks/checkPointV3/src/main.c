/********************************
* Filename: main.c
* 
* author: filbri
* created: 2019-11-03
* 
* notes: this program reads personal data from a file.
* it prints whether a person was born during a leap year or not.
* it stores all personal data from the file in a struct. 
* finally, the program checks if the social security numbers in the 
* file are in correct format.
* 
* ver: 2019-11-03 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

int main()
{
    getPerson(); // call getPerson function
    

    /*

    int year, month, day, birthNo, chkDigit;
    char sex[10]; 
    char *PNo = malloc(MAX_PNO_LEN*sizeof(char));
  
    printf("Input your ID-number with 12 digits (ex. 197812242365): ");
    scanf("%s",PNo);
    // YYYYMMDDbbbc
    //
    //check length
    if( strlen(PNo) != MAX_PNO_LEN ){
        printf("The number %s you enter is not valid!",PNo);
        return 0;
    }
    //
    //check year  YYYYY 
    char *y = malloc(YEAR_LENGTH * sizeof(char));
    substr(PNo, 0, YEAR_LENGTH, y);
    year = atoi(y);
    if(year > 2018 || year < 1752){
        printf("The year, %d, you enter is not valid!", year);
        return 0;
    }
    //
    //check month MM
    if(getMonth(PNo,MAX_PNO_LEN, &month) == -1){
        printf("The month, %d, you enter is not valid!", month);
        return 0;
    }
    //
    //check day DD
    char *d = malloc(DAY_LENGTH * sizeof(char));
    substr(PNo, 6, DAY_LENGTH, d);
    day = atoi(d);      
    if(getDate(PNo, MAX_PNO_LEN, year, month, day) == -1){
        printf("The day, %d, you enter is not valid!" , day);
        return 0;
    }
    //
    //check birthnumber bbb
    char *b = malloc(SERIALNO_LENGTH * sizeof(char));
    substr(PNo, 8, SERIALNO_LENGTH, b);
    birthNo = atoi(b);
    if(birthNo < 0 || birthNo > 999){
        printf(" The birthnumber, %d, is not valid!",birthNo);
        return 0;
    }
    //
    //check sex
    if( birthNo % 2 == 0){
         strcpy(sex, "Female");
    }else{
        strcpy(sex, "Male");
    }
    //
    //check ctrl number
    char *ctrl = malloc( 2 * sizeof(char));
    substr(PNo, MAX_PNO_LEN - 1, 1, ctrl);
    chkDigit = atoi(ctrl);
    int sum = calculateCheckSum(PNo, MAX_PNO_LEN);
    if(sum != chkDigit){
        printf("The checknumber, %d, is not valid", chkDigit);
        return 0;
    }
    //
    //print result
    if( isLeap(year) ){
        printf("Your ID-number is valid and you are a %s and the year %d you was born was a leap year", sex, year);
    }else{
        printf("Your ID-number is valid and you are a %s and the year %d you was born was not a leap year", sex, year);
    }
    */
return 0;
}