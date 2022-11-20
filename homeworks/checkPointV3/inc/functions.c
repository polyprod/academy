/********************************
* Filename: functions.c
* 
* author: filbri
* created: 2019-11-03
* 
* notes: this file contains function definitions for the 
* checkPointV3 program
* 
* ver: 2019-11-03 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include "header.h"
//
//starts with index and return lenght number of chars
//ex
// source = "Programming is fun"
// index = 3
// length = 8
// .... will give dest = "gramming"  
void substr(char *source, int index,  int length,  char *dest ){
    memcpy(dest, source + index, length);
    dest[length] = '\0';
}
//
//checks if date is a valid date
int getDate(char *PNo,int size, int year, int m, int d){
    int daysInMonth = 30;
      //get number of days in month
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        daysInMonth = 31;
    } else if( m == 2){
        //get leap year
        if(isLeap(year)){
            daysInMonth = 29; //if not leap year
        }else{
            daysInMonth = 28; //if not leap year
        }
    }
    //check valid day number
    if(d > daysInMonth || d < 1){ return -1; } //not valid
    return 0;
}
//
//check if month is a valid month
int getMonth(char *PNo, int size, int *m){
    char *chr = malloc(MONTH_LENGTH * sizeof(char));
    substr(PNo, 4, MONTH_LENGTH, chr);
    *m = atoi(chr);
    if(*m > 12 || *m < 1){ return -1; } //month not valid
    return 0; //month valid
}
//
//check if the year is a leap year
int isLeap(int year)
{
  if (year % 400 == 0)
  {
      return 1; // return true if year is a leap year
  }
  else if (year % 100 == 0)
  {
      return 0; // return false if year is not a leap year
  }
  else if (year % 4 == 0)
  {
      return 1; // return true if year is not a leap year
  }
}
//
// calculate the checkSum 'control digit'
int calculateCheckSum(char *PNo, int size)
{
    int sum = 0;        
    //strip PNo and get YYMMDDbbb
    //multiply digits and sum them
    //calculate checksum

    //return chkSum
    int chkSum = 0;
    return chkSum;
}

char getPerson()
{
    struct person first_person; // create struct variable to connect with members of struct
    FILE *fptr; // file pointer declaration
    char socialSecurityNumber[12];
    // open file in read mode
    fptr = fopen("data/persons.dat", "r");
    if (fptr != 0)
    {
        while (!feof(fptr)) // feof returns true when the last line been read
        {
            char firstName[20];
            char lastName[20];
            
            // get first person
            fscanf(fptr, "%[^;];%[^;];%[^;]", first_person.firstName, first_person.lastName, first_person.socialSecurityNumber);
            
            printf("%s", first_person.lastName); 
        }
        
    }
    else
    {
        printf("\nError opening the file!\n");
    }
    // close file
    fclose(fptr);
    correctSocialSecurityNumber(first_person.socialSecurityNumber); // call next function
}

void correctSocialSecurityNumber(char array[])
{
    int numLength = strlen(array) - 1;
    if (numLength < 12 || numLength > 12)
    {
        printf("The number is not in the correct length!");
    }
    else
    {
        printf("The number is in correct length!");
    }
}