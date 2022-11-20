// this header contains declarations and definitions for the checkPointV3 program

//#ifndef PNO_H
//#define PNO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PNO_LEN 12
#define MONTH_LENGTH 2
#define DAY_LENGTH 2
#define YEAR_LENGTH 4
#define SERIALNO_LENGTH 3

struct person // struct definition
{
    char firstName[20];
    char lastName[20];
    char socialSecurityNumber[15];
};


void substr(char *source, int index,  int length,  char *dest );
int calculateCheckSum(char *PNo, int size);
int isLeap(int year);
int getMonth(char *PNo, int size, int *m);
int getDate(char *PNo,int size, int year, int m, int d);
char getPerson();
void correctSocialSecurityNumber();
//#endif 